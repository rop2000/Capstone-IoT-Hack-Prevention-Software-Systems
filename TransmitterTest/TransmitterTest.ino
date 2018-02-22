#include "pitches.h"
#define GND 10
#define VCC 2
#define DATA 9
#define GND_R 3
#define VCC_R 2
#define DATA_R 4
#define button 6
#define buzzer 5
#define yellowled 8
#define redled 7
int buttonState;
boolean recordedSignal[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1};
int melody[] = {
  NOTE_C4, NOTE_G4, NOTE_A4, NOTE_A3, NOTE_B3, NOTE_D3, NOTE_D4,
  NOTE_DS5, NOTE_E5, NOTE_FS5, 0, NOTE_B5, NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_FS5, NOTE_B5, NOTE_DS6, NOTE_E6, NOTE_DS6, NOTE_AS5, NOTE_B5, 0,
  NOTE_FS5, 0, NOTE_DS5, NOTE_E5, NOTE_FS5, 0, NOTE_B5, NOTE_CS6, NOTE_AS5, NOTE_B5, NOTE_CS6, NOTE_E6, NOTE_DS6, NOTE_E6, NOTE_CS6,
 NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_CS4, NOTE_D4, NOTE_CS4, NOTE_B3, NOTE_B3, NOTE_CS4,
  NOTE_D4, NOTE_D4, NOTE_CS4, NOTE_B3, NOTE_CS4, NOTE_DS4, NOTE_FS4, NOTE_GS4, NOTE_DS4, NOTE_FS4, NOTE_CS4, NOTE_DS4, NOTE_B3, NOTE_CS4, NOTE_B3,
  NOTE_DS4, NOTE_FS4, NOTE_GS4, NOTE_DS4, NOTE_FS4, NOTE_CS4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_CS4, NOTE_B3, NOTE_CS4,
  NOTE_D4, NOTE_B3, NOTE_CS4, NOTE_DS4, NOTE_FS4, NOTE_CS4, NOTE_D4, NOTE_CS4, NOTE_B3, NOTE_CS4, NOTE_B3, NOTE_CS4,
  NOTE_FS4, NOTE_GS4, NOTE_D4, NOTE_DS4, NOTE_FS2, NOTE_CS4, NOTE_D4, NOTE_CS4, NOTE_B3, NOTE_B3, NOTE_CS4 };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  32, 32, 32, 32, 32, 32, 32, 32,
  32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
  32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
  32,32,32,32,32,32,32,32,32,32,32,
  32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
  32,32,32,32,32,32,32,32,32,32,32,32,32,32,
  32,32,32,32,32,32,32,32,32,32,32,32,
  32,32,32,32,32,32,32,32,32,32,32
};
 int randomNote;

void setup() {
  // put your setup code here, to run once:

  pinMode(GND, OUTPUT);
  pinMode(VCC, OUTPUT);
  pinMode(DATA, INPUT);
  pinMode(redled, OUTPUT);
 // pinMode(buzzer, OUTPUT);
  digitalWrite(GND, LOW);
  digitalWrite(VCC, HIGH);
  pinMode(GND_R, OUTPUT);
  pinMode(VCC_R, OUTPUT);
  pinMode(DATA_R, INPUT);
  digitalWrite(GND_R, LOW);
  digitalWrite(VCC_R, HIGH);
  Serial.begin(115200);
  Serial.println("CLEARDATA"); //clears up any data left from previous projects
  Serial.println("LABEL,Time,Binary Data"); //always write LABEL, so excel knows the next things will be the names of the columns (instead of Acolumn you could write Time for instance)
  Serial.println("RESETTIMER");
  pinMode(button, INPUT);
  pinMode(yellowled, OUTPUT);
}

void loop() {
  // main code here, to run repeatedly:

  for (int i = 0; i < sizeof(recordedSignal) - 1; i++)
  {
    buttonState = digitalRead(button);
    if (buttonState == LOW)
    {
      randomNote = random(101);
      int noteDuration = 1000 / noteDurations[randomNote];
     //tone(6, melody[randomNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      digitalWrite(yellowled, HIGH);
      Serial.print("Binary Value Transmitted: ");
      Serial.print(digitalRead(DATA));
      Serial.println();
      digitalWrite(redled, LOW);
      digitalWrite(DATA, recordedSignal[i]);
      delayMicroseconds(315);
      Serial.print("DATA,TIME,");
      Serial.print(digitalRead(DATA_R));
      Serial.println();
      delay(100);
      digitalWrite(redled, HIGH);
  
    }
    else {
        digitalWrite(yellowled, LOW);
        digitalWrite(redled, LOW);
        buttonState = 0;
    }
  }

  delayMicroseconds(9000);
}
