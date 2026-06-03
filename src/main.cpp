#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define SDA_PIN 8
#define SCL_PIN 9
#define BIBRATION_PIN 4
#define LED_PIN 5
#define BUZZER_PIN 18

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1)

void setup(){
    Serial.begin(115200);
    pinMode(VIBRATION_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    Wire.begn(SDA_PIN< SCL_PIN)

    if(display.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
        Serial.println("OLED NOT FOUND")
    }

    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE)
    display.setCursor(10, 10)
    dissplay.println("Earth")
    display.setCursor(0, 40)
    display.println("SYSTEM")
    display.display();

    delay(200)
}