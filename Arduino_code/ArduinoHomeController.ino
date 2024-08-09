#include <EEPROM.h>
#include <SoftwareSerial.h>
#SoftwareSerial BT_Serial(2, 3); // RX, TX

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode (8,OUTPUT);
    pinMode (9,OUTPUT);
    pinMode (10,OUTPUT);
    pinMode (11,OUTPUT);

    digitalWrite (8, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
    digitalWrite (11, LOW);
  }
  
  void loop() {
    
    // put your main code here, to run repeatedly:
    if (Serial.available()>0){
      char data=Serial.read();
      switch (data)
      {
        case '1': digitalWrite (8, HIGH);break;
        case '2': digitalWrite (8, LOW); break;
        case '3': digitalWrite (9, HIGH);break;
        case '4': digitalWrite (9, LOW); break;
        case '5': digitalWrite (10, HIGH);break;
        case '6': digitalWrite (10, LOW); break;
        case '7': digitalWrite (11, HIGH);break;
        case '8': digitalWrite (11, LOW); break;
        default: break;
      }

    }
    delay (50);
  
  }




