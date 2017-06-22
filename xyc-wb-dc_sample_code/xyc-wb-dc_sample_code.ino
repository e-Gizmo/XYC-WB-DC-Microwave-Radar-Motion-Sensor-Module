/*
  XYC-WB-DC Microwave Radar
  Motion sensor module
  
  This sample sketch is for reading the
  Output and display it to the Serial Monitor.
  No detection = 0; detected motion = 1.
  
  Wiring connections:
  ==================
  gizDuino   to   Microwave Radar Motion sensor
  +5V     -------> +VIN (3.3V to 20V DC)
  GND     -------> GND
  D2      -------> OUTPUT
  
  Codes by:
  e-Gizmo Mechatronix Central
  http://www.e-gizmo.com
  June 19,2017
  
 */

//pin assignment for input
int Output = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(Output, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int SensorVal = digitalRead(Output);
  // print out the state of sensor:
  Serial.println(SensorVal);
  delay(1);        // delay in between reads for stability
}



