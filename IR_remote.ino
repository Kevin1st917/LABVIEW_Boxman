#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if (irrecv.decode(&results)){
    if(results.value == 16718055){
        Serial.println(0000, HEX);
        }
    if(results.value == 16716015){
        Serial.println(0001, HEX);
        }
    if(results.value == 16734885){
        Serial.println(0002, HEX);
        }
    if(results.value == 16730805){
        Serial.println(0003, HEX);
        }
    irrecv.resume();
  }
}
