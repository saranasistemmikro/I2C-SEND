#include <Wire.h>
char mstr[30];
  uint8_t mcount=1;

// modified by Andi Ikhwan D/ SARANA SISTEM MIKRO
//  MARCH 20.2024

void setup() {
   uint8_t mcount=1;
   Serial.begin(115200);
   Wire.begin(); // join i2c bus (address optional for master)
}

void loop() 
{
  // put your main code here, to run repeatedly:

 
  Wire.beginTransmission(15); // transmit to device #8
  sprintf(mstr,"Queue Number :  %d \r\n", mcount);

  Serial.print("I2C-Sender:");
  Serial.print(mstr);

  Wire.write(mstr);              // sends one byte
  Wire.endTransmission();    // stop transmitting

  mcount++;
  delay(500);

 

}
