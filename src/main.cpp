#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire,4);


void setup() {
  Serial.begin(9600);

  Serial.println("128x64 OLED FeatherWing test");
  delay(250); // wait for the OLED to power up
 
  display.begin(0x3C, true); // Address 0x3C default

  Serial.println("OLED begun");

  // Show image buffer on the display hardware.
  // Since the buffer is intialized with an Adafruit splashscreen
  // internally, this will display the splashscreen.
  display.display();
  delay(1000);

  // Clear the buffer.
  display.clearDisplay();
  display.display();

  //display.setRotation(1);
  Serial.println("Button test");

  // pinMode(BUTTON_A, INPUT_PULLUP);
  // pinMode(BUTTON_B, INPUT_PULLUP);
  // pinMode(BUTTON_C, INPUT_PULLUP);

  // text display tests
  
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);
  display.setCursor(40,20);
  display.print("Testing..\n");
//  display.println("IP: 10.0.1.23");
//  display.println("Sending val #0");
  display.display(); // actually display all of the above
  delay(2000);
  
  display.setCursor(35,35);
  display.print("connected!");
  display.display(); // actually display all of the above


}

void loop() {
  // if(!digitalRead(BUTTON_A)) display.print("A");
  // if(!digitalRead(BUTTON_B)) display.print("B");
  // if(!digitalRead(BUTTON_C)) display.print("C");
  // delay(10);
  // yield();
  // display.display();
}
