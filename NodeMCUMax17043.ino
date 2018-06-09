#include "MAX17043.h"
#include "Wire.h"
#include "SH1106.h"

SH1106  display(0x3c,4,5);
MAX17043 batteryMonitor;
char tmp[8];

void setup() {
  
 
Serial.begin(115200);
Serial.println();
Serial.println();

display.init();
display.flipScreenVertically();
display.setFont(ArialMT_Plain_10);
display.setTextAlignment(TEXT_ALIGN_LEFT);

Wire.begin();
batteryMonitor.reset();
batteryMonitor.quickStart();
delay(1000);

}

void loop() {
  
  display.clear();
  
  float cellVoltage = batteryMonitor.getVCell();
  float stateOfCharge = batteryMonitor.getSoC();
  
  display.drawString(0, 0, "LiPo: ");
  display.drawString(30, 0, dtostrf(stateOfCharge,4,1,tmp));
  display.drawString(60, 0, "%");

  

  display.drawString(70, 0, dtostrf(cellVoltage,5,2,tmp));
  display.drawString(95, 0, "V");
 

  
  display.display();
  delay(1000);

  
}
