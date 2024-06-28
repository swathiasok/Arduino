#include <VirtualWire.h>
const int pin = 7;

void setup()
{
pinMode(11, OUTPUT);
vw_set_ptt_inverted(true); 
vw_set_rx_pin(12);
vw_setup(4000);
pinMode(13, OUTPUT);
Serial.begin(9600);
vw_rx_start(); 
}
void loop()
{
uint8_t buf[VW_MAX_MESSAGE_LEN];
uint8_t buflen = VW_MAX_MESSAGE_LEN;

if (vw_get_message(buf, &buflen)) 
{
if(buf[0]=='1'){
Serial.println("Message 0 recieived");
digitalWrite(11,1);
delay(2000);
digitalWrite(11,0);
}
if(buf[0]=='0'){
Serial.println("Message 1 received");
digitalWrite(11,0);
}

}
}
