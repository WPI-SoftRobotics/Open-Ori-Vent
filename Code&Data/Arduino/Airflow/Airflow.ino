// differential pressure -> air flow

// formula: q = cD π/4 D_2^2 [2(P_1-P_2) / ρ(1 – d^4) ]^{1/2}
// q is the flow in m3/s
/* cD is the discharge coefficient, and is the area ratio = A2/A1 */
/* P1 and P2 are in N/m2 */
/* ρ is the fluid density in kg/m3 */
/* D2 is the orifice, venturi or nozzle inside diameter (in m) */
/* D1 is the upstream and downstream pipe diameter (in m) */
/* and d = D2/D1 diameter ratio */

int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read

double flow_rate;

/* const int cD = 1; */
/* const double pi = 3.1415926; */
/* int diff_pressure = 0; */
/* const double tho = 1.225; */
/* const double Dia1 = 0.019; */
/* const double Dia2 = 0.0056; */
/* const double d = 0.2947368421; */

int Filter_Value;
int volume_output;

// Status for UI
#define inhale 0
#define exhale 1
#define exhalePause 2
int breathStatus = inhale;

int exhalePeriod = 0;
int inhalePeriod = 0;

int breathVolumemls = 0;  
int target_BPM = 20;
int IEval = 2;
unsigned long breathTime = 0;


// 递推平均滤波法（又称滑动平均滤波法）
#define FILTER_N 12
int filter_buf[FILTER_N + 1];
int Filter() {
  int i;
  int filter_sum = 0;
  filter_buf[FILTER_N] = analogRead(analogPin);
  for(i = 0; i < FILTER_N; i++) {
    filter_buf[i] = filter_buf[i + 1]; // 所有数据左移，低位仍掉
    filter_sum += filter_buf[i];
  }
  return (int)(filter_sum / FILTER_N);
}

int getFilteredSensorData()
{
  Filter_Value = Filter();       // 获得滤波器输出值
  //Serial.println(Filter_Value); // 串口输出

  sensor_rawdata = Filter_Value;
  
  return sensor_rawdata;
}

int getVolumePerBreath ()
{
  int newFlowRate = getFilteredSensorData();                    // in ml/s
  static byte integratePeriod = 10;                           // in miliseconds
  static unsigned long integratePeriodCounter = millis();     // to keep track of the current integration time
  static unsigned long breathVolumeOutput = 0;                // final volume to 'return' from function
  static unsigned long breathVolume = 0;                      // volume accumulator
  breathVolume += newFlowRate;
  
  if (millis() - integratePeriodCounter >= 10)
  {
    breathVolumeOutput = breathVolume;
    breathVolume = 0;
    integratePeriodCounter = millis();

    Serial.println((breathVolumeOutput));
  }
  
/* //  Serial.println(newFlowRate); // debug */
/*   // add to integrated flow rate accumulator every Xms */
/*   if (breathStatus == inhale)        // if during inhale */
/*   { */
/*     // add to integrated flow rate accumulator with volume recorded over the integratePeriod */
/*     if (millis() - integratePeriodCounter >= integratePeriod) */
/*     { */
/*       breathVolume = breathVolume + (newFlowRate * (millis() - integratePeriodCounter)); // convert to volume in ml/ms over integratePeriod */
/*       //Serial.println(millis() - integratePeriodCounter);      // code run time */
/*       breathVolumemls = breathVolume / 1000;                    // store volume rise (useful in VCV mode) */
/*       integratePeriodCounter = millis(); // debug */
/*     } */
/* //    Serial.println(breathVolume); */
/*   } */
/*   else                                    // if exhale */
/*   { */
/*     breathVolumemls = 0;                  // reset volume rise variable */
/*     if (breathVolume > 0)                 // if volume hasn't been recorded already for last breath */
/*     { */
/*       breathVolumeOutput = round(breathVolume * 0.001);   // set output volume */
/*       breathVolume = 0;                   // reset accumulator */
/*     } */
/*     integratePeriodCounter = millis();    // reset */

/*     //Serial.println(breathVolume); //debug */
/*   } */

  return breathVolumeOutput;
}


void setup() {
  Serial.begin(9600);           //  setup serial
//  randomSeed(analogRead(0)); // 产生随机种子 
}

void loop() {
/*   static unsigned long loop_start = millis(); */
/*   static unsigned long inhaleCounter = millis(); */
/*   static unsigned long exhaleCounter = millis(); */


/*   int target_breathPeriod = (60 / target_BPM) * 1000; */
/*   int target_inhalePeriod = target_breathPeriod / (IEval + 1);  // set inhale period */
/*   unsigned long motorSetTimer = millis(); */
/*   int n = 0; */
/*   while (n<100)  // waits for motor arm to begin pushing BVM */
/*   { */
/* //    setMotor1Speed(-400); */
/*     n++; */
/*   } */
/*   int motorSetTime = millis() - motorSetTimer; */
/*   while (millis() - inhaleCounter < target_inhalePeriod) */
/*   { */
/*     //doInhale(); */
/*     breathStatus = inhale; */
/*   } */
/*   inhalePeriod = millis() - inhaleCounter; */
/*   exhaleCounter = millis(); */

  //breathStatus = exhale;
  volume_output = getVolumePerBreath();

  //Serial.println(volume_output); 

  /* while (millis() - (breathTime - motorSetTime) < target_breathPeriod) */
  /* { */
  /*   breathStatus = exhalePause; */
  /* } */
    
  //diff_pressure = analogRead(analogPin) ;  // read the input pin

//  Serial.println(dp_temp);          // debug value
//  Serial.println(flow_rate);          // debug value

}

/*
  A、名称：递推平均滤波法（又称滑动平均滤波法）
  B、方法：
  把连续取得的N个采样值看成一个队列，队列的长度固定为N，
  每次采样到一个新数据放入队尾，并扔掉原来队首的一次数据（先进先出原则），
  把队列中的N个数据进行算术平均运算，获得新的滤波结果。
  N值的选取：流量，N=12；压力，N=4；液面，N=4-12；温度，N=1-4。
  C、优点：
  对周期性干扰有良好的抑制作用，平滑度高；
  适用于高频振荡的系统。
  D、缺点：
  灵敏度低，对偶然出现的脉冲性干扰的抑制作用较差；
  不易消除由于脉冲干扰所引起的采样值偏差；
  不适用于脉冲干扰比较严重的场合；
  比较浪费RAM。
  E、整理：shenhaiyu 2013-11-01
*/



