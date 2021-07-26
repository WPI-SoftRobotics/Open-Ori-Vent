//VentSim v1.0
//by Dominick C. Watts

int x = 0;
int row = 0;
int reading;
float kPa;
float rawcmH2O;
float cmH2O;
void setup() {
Serial.begin(9600);

}
void loop() {
reading = analogRead(A0);
kPa = (reading / 25)-2;
rawcmH2O = (kPa * 10.20);
cmH2O = abs(rawcmH2O - 12.47);
//Serial.print("DATA,TIME,");
//Serial.print(x);
//Serial.print(",");
Serial.println(kPa);
//Serial.print(",");
//Serial.println(cmH2O);

delay(100);
}
