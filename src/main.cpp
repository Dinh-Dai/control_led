#include <Arduino.h>
#include "LED.h"        
#include <OneButton.h>  

// Định nghĩa các chân cho LED và nút bấm
const int ledPin = 18;
const int buttonPin = 19;

// Tạo đối tượng LED và nút bấm
LED led(ledPin, HIGH);  
OneButton button(buttonPin, true);  

// Hàm xử lý khi nhấn nút ngắn (single click)
void btnPush() {
    led.flip();  
}

// Hàm xử lý khi nhấn nút hai lần (double click)
void btnDoubleClick() {
    led.blink(200); 
}

void setup() {
    led.off(); 
    button.attachClick(btnPush);          
    button.attachDoubleClick(btnDoubleClick); 
}

void loop() {
    led.loop();  
    button.tick();  
}
