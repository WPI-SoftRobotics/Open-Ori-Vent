
// Ventilator motor set clockwise
int Vent1_clockwise = 3;      // Bellows 1 connected to Analog pin 3
int Vent2_clockwise = 6;      // Bellows 2 connected to Analog pin 3
int Vent3_clockwise = 9;      // Bellows 3 connected to Analog pin 3

// Ventilator motor set counterclockwise
int Vent1_counterclockwise = 5;      // Bellows 1 connected to Analog pin 3
int Vent2_counterclockwise = 10;      // Bellows 2 connected to Analog pin 3
int Vent3_counterclockwise = 11;      // Bellows 3 connected to Analog pin 3

void setup() {
  pinMode(Vent1_clockwise, OUTPUT);  // sets the pin as output
  pinMode(Vent2_clockwise, OUTPUT);  // sets the pin as output
  pinMode(Vent3_clockwise, OUTPUT);  // sets the pin as output
  pinMode(Vent1_counterclockwise, OUTPUT);  // sets the pin as output
  pinMode(Vent2_counterclockwise, OUTPUT);  // sets the pin as output
  pinMode(Vent3_counterclockwise, OUTPUT);  // sets the pin as output  
}

void loop() {


// Robustness test   0.5 Hz
/*
  // 12 Breaths per minute    5(S)  
  //analogWrite(Vent1_clockwise,255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent3_clockwise,255);
  delay(1000);//1000

  //analogWrite(Vent1_counterclockwise,0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent3_clockwise,0);
  delay(1000);
*/



  // 12 Breaths per minute    5(S)  
  analogWrite(Vent1_clockwise,255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_clockwise,255);
  analogWrite(Vent3_clockwise,255);
  delay(1000);//1000
  analogWrite(Vent1_clockwise,0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_clockwise,0);
  analogWrite(Vent3_clockwise,0);
  delay(50);
  analogWrite(Vent1_counterclockwise,255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_counterclockwise,255);
  analogWrite(Vent3_counterclockwise,255);
  delay(50);//1000
  analogWrite(Vent1_counterclockwise,0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_counterclockwise,0);
  analogWrite(Vent3_counterclockwise,0);
  delay(3900);

  
/*
  // 40 breaths per minute    1.5(S) 

  analogWrite(Vent1_clockwise,255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_clockwise,255);
  analogWrite(Vent3_clockwise,255);
  delay(1000);//1000
  analogWrite(Vent1_clockwise,0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_clockwise,0);
  analogWrite(Vent3_clockwise,0);
  delay(50);
  analogWrite(Vent1_counterclockwise,255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_counterclockwise,255);
  analogWrite(Vent3_counterclockwise,255);
  delay(50);//1000
  analogWrite(Vent1_counterclockwise,0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  analogWrite(Vent2_counterclockwise,0);
  analogWrite(Vent3_counterclockwise,0);
  delay(400);

*/
  
}
