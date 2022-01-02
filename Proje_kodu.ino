#include <Wire.h>

#include <LiquidCrystal_I2C.h>        //Used Lcd library.
LiquidCrystal_I2C ekran (0x3f,16,2);  //Identification of the LCD screen used.
int esikDegeri = 200;                 
int buzzerPin = 9;                    //Pin number defined for buzzer.
int deger ;
 



void setup(){
  pinMode(buzzerPin, OUTPUT);
  ekran.init();                    //Cod used to initialize the LCD screen.
 ekran.backlight();                //Backlight usage of the LCD screen.
 
 
  
    
}
void loop() {
  deger= analogRead(A0);
  
  

  if(deger> esikDegeri){
    
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100); 
    ekran.clear();                    //It was used to delete the text in Else and write a new one instead.
    ekran.print("Lutfen Cami Acin");  //The sentence that will be written on the lcd in the if block.
    
  
  }
  else{
    digitalWrite(buzzerPin, LOW);
    ekran.clear();
    ekran.print("Degerler Normal");
    
      
  }
}
