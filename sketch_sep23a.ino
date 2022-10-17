#include "pitches.h"
const int buttonPin1 = 2;
const int buttonPin2 = 7;
const int buttonPin3 = 8;
const int buttonPin4 = 9;
const int buzzerPin = 6;


int buttonState1 = LOW;
int buttonState2 = LOW;
int buttonState3 = LOW;
int buttonState4 = LOW;

/* 
  We Wish You a Merry Christmas - Traditional Christmas song
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs                                            
                                              
                                              Robson Couto, 2019
*/
int songnameMelody[] = {
  
  
  NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_E5, NOTE_C5, NOTE_C5,
  NOTE_A5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_G5,
  NOTE_F5, NOTE_D5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,

  NOTE_F5, NOTE_C5, //8 
  NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_E5, NOTE_C5, NOTE_C5,
  NOTE_A5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_G5,
  NOTE_F5, NOTE_D5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,
  NOTE_F5, NOTE_C5,

  NOTE_F5, NOTE_F5, NOTE_F5,//17
  NOTE_E5, NOTE_E5,
  NOTE_F5, NOTE_E5, NOTE_D5,
  NOTE_C5, NOTE_A5,
  NOTE_AS5, NOTE_A5, NOTE_G5,
  NOTE_C6, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,
  NOTE_F5, NOTE_C5,
  NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5,
  
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5, //27
  NOTE_E5, NOTE_C5, NOTE_C5,
  NOTE_A5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_G5,
  NOTE_F5, NOTE_D5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,
  NOTE_F5, NOTE_C5,
  NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_E5, NOTE_E5,
  NOTE_F5, NOTE_E5, NOTE_D5,
  
  NOTE_C5, NOTE_A5,//36
  NOTE_AS5, NOTE_A5, NOTE_G5,
  NOTE_C6, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,
  NOTE_F5, NOTE_C5,
  NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5, 
  NOTE_E5, NOTE_C5, NOTE_C5,
  
  NOTE_A5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_G5,//45
  NOTE_F5, NOTE_D5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,
  NOTE_F5, NOTE_C5,
  NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5,
  NOTE_G5, NOTE_G5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_E5, NOTE_C5, NOTE_C5,
  
  NOTE_A5, NOTE_A5, NOTE_AS5, NOTE_A5, NOTE_G5, //53
  NOTE_F5, NOTE_D5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_G5, NOTE_E5,
  NOTE_F5,
};
  int songnameDurations[] = {

   4, 8, 8, 8, 8,
  4, 4, 4,
4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4,
2, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4, 2, 4,
2, 4, 4, 4, 4, 2, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 2, 4, 4, 8, 8, 8, 8, 4, 4, 4, 
4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4, 2, 4, 4, 4, 4,
2, 4, 4, 4, 4, 2, 4, 4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 2, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8,
8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4, 2, 4, 4, 8, 8, 8, 8, 4, 4, 4, 2, 4, 4,
8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 8, 8, 4, 4, 4, 2
 
};



int song2Melody[] = {
   NOTE_D5, NOTE_E5, NOTE_A4,
  NOTE_E5, NOTE_FS5, NOTE_A5, NOTE_G5, NOTE_FS5,
  NOTE_D5, NOTE_E5, NOTE_A4,
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_D5, NOTE_D5,
  NOTE_D5, NOTE_E5, NOTE_A4,
  NOTE_E5, NOTE_FS5, NOTE_A5, NOTE_G5, NOTE_FS5,
  NOTE_D5, NOTE_E5, NOTE_A4,
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_D5, NOTE_D5,
  NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_CS5,
  NOTE_B4, NOTE_A4

  
};

int song2Durations[] = {
4, 4, 4, 
4, 4, 16, 16, 8,
4, 4, 2,
16, 16, 16, 8, 16,
4, 4, 4,
4, 4, 16, 16, 8,
4, 4, 2,
16, 16, 16, 8, 16,
8, 8, 8, 8, 8, 8, 
16, 2
};

int beatsPerMinute = 45;

void setup() {
  // put your setup code here, to run once:
 pinMode(buttonPin1,INPUT);
 pinMode(buttonPin2,INPUT);
  pinMode(buttonPin3,INPUT);
   pinMode(buttonPin4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);
buttonState3 = digitalRead(buttonPin3);
buttonState4 = digitalRead(buttonPin4);
  if (buttonState1 == HIGH){
    playsongname();
    
    }
  if (buttonState2 == HIGH)
  {
    playsong2();
  }
}

void playsongname() {
 
  // iterate over the notes of the melody:
  int len = sizeof(songnameMelody)/sizeof(songnameMelody[0]);
  for (int thisNote = 0; thisNote < len; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = static_cast<int>(1000 / songnameDurations[thisNote] * 60 / beatsPerMinute);
    tone(buzzerPin, songnameMelody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzerPin);
  }
}

void playsong2() {

  // iterate over the notes of the melody:
  int len = sizeof(song2Melody)/sizeof(song2Melody[0]);
  for (int thisNote = 0; thisNote < len; thisNote++) {
  
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = static_cast<int>(1000 / song2Durations[thisNote] * 60 / beatsPerMinute);
    tone(buzzerPin, song2Melody[thisNote], noteDuration);
  
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzerPin);
  }
}
