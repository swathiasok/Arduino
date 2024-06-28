
#include <VirtualWire.h>

const int datain = 2;

int red1 = 13;
int red2 = 10;
int red3 = 7;

int yellow1 = 12;
int yellow2 = 9;
int yellow3 = 6;

int green1 = 11;
int green2 = 8;
int green3 = 5;

void setup()
{
    vw_set_ptt_inverted(true);
    vw_set_rx_pin(datain);
    vw_setup(2000);
    vw_rx_start();
    
   pinMode(red1,OUTPUT);
   pinMode(red2,OUTPUT);
   pinMode(red3,OUTPUT);
   pinMode(yellow1,OUTPUT);
   pinMode(yellow2,OUTPUT);
   pinMode(yellow3,OUTPUT);
   pinMode(green1,OUTPUT);
   pinMode(green2,OUTPUT);
   pinMode(green3,OUTPUT);
}

void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN; 

    digitalWrite(red1, HIGH);
      digitalWrite(red2, HIGH);
      digitalWrite(green3, HIGH);
    
      delay(2000);
    
      digitalWrite(yellow1, HIGH);
    
      delay(1000);
      
      digitalWrite(yellow1, LOW);
      
      digitalWrite(red1, LOW);
      digitalWrite(green3, LOW);
      digitalWrite(green1, HIGH);
      digitalWrite(red3, HIGH);
    
      delay(2000);
    
      digitalWrite(yellow2, HIGH);
    
      delay(1000);
      
      digitalWrite(yellow2, LOW);
    
      digitalWrite(green2, HIGH);
      digitalWrite(red1, HIGH);
      digitalWrite(red2, LOW);
      digitalWrite(green1, LOW);
    
      delay(2000);
      
      digitalWrite(yellow3, HIGH);
    
      delay(1000);
      
      digitalWrite(yellow3, LOW);
    
      digitalWrite(red2, HIGH);
      digitalWrite(red3, LOW);
      digitalWrite(green2, LOW);
      
      delay(2000);
 
    if (vw_get_message(buf, &buflen))
    {
      Serial.println("Message recieved");
      if(buf[0]=='1')
      {  

        Serial.println("Message recieved");
       
      }  
      if(buf[0]=='0')
      {
       digitalWrite(green1,HIGH);
       digitalWrite(green2,HIGH);
       digitalWrite(green3,HIGH);
       
      }
    }
}
