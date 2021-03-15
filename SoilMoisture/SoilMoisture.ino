#define SensorPin A0 
float sensorValue = 0; //Define the sensor pin as Analog Pin

void setup() { 
 Serial.begin(9600); //Begin Serial Communication for debugging
} 


void loop() { 
  //The for loop will take the average value of 100 readings
 for (int i = 0; i <= 100; i++) 
 { 
   sensorValue = sensorValue + analogRead(SensorPin); 
   delay(1); 
 } 
 sensorValue = sensorValue/100.0; //Taking average
 Serial.println(sensorValue); //Prints the reading
 delay(30); //Delay
}
