#include <VirtualWire.h>

char const *controller;

void setup() {
pinMode(13,OUTPUT);
vw_set_ptt_inverted(true); //
vw_set_tx_pin(12);
vw_setup(4000);
Serial.begin(9600);
}

void loop(){
controller="1" ;
vw_send((uint8_t *)controller, strlen(controller));
Serial.println("Message 1 transmitted");
vw_wait_tx(); 
digitalWrite(13,1);
delay(2000);
controller="0" ;
vw_send((uint8_t *)controller, strlen(controller));
Serial.println("Message 0 transmitted");
vw_wait_tx();
digitalWrite(13,0);
delay(2000);

}
