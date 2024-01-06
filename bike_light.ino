#include <Adafruit_NeoPixel.h>  //Libreries Neopixel of Adafruit
#define PIN 2 //Pin to connect led
#define LGT 12 //Lenght of led strip
#define delaytime 25

Adafruit_NeoPixel LED = Adafruit_NeoPixel(LUN, PIN, NEO_GRB + NEO_KHZ800);

void setup(){}

void loop(){

  for(int i=0; i<LGT; i++){
     LED.setPixelColor(i, LED.Color(254,254,0));
     LED.show();
     delay(delaytime/2);
  }

  for(int i=0; i<LGT; i++){
     LED.setPixelColor(i, LED.Color(0,0,0));
     LED.show();
     delay(delaytime/2);
  }
  delay(delaytime);
}
