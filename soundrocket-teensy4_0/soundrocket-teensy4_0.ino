#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine;          //xy=563.2000350952148,640.200029373169
AudioSynthNoisePink      pink;          //xy=563.2000350952148,678.2000370025635
AudioAmplifier           amp;           //xy=718.2000389099121,678.2000379562378
AudioMixer4              mixer;         //xy=881.1999969482422,658.1999969482422
AudioOutputI2S           i2s;           //xy=1052.1999816894531,658.200029373169
AudioConnection          patchCord1(sine, 0, mixer, 0);
AudioConnection          patchCord2(pink, amp);
AudioConnection          patchCord3(amp, 0, mixer, 3);
AudioConnection          patchCord4(mixer, 0, i2s, 0);
AudioConnection          patchCord5(mixer, 0, i2s, 1);
// GUItool: end automatically generated code

//UI pins
int pinkPin = 2;
int sinePin = 3;
int ledPin = 4;

//DIT4192 I/O
int ditRST = 0;

int ditCS = 10;
int ditCDIN = 11;
int ditCCLK = 19;

int ditSCLK = 21; //pre-configured
int ditMCLK = 23; //pre-configured
int ditSDATA = 7; //pre-configured
int ditSYNC = 20; //pre-configured

void setup() {
    //Initialize DIT4192 chip
    //TODO: Decide whether software mode is worth it
    pinMode(ditRST, OUTPUT); 
    pinmode(ditCS, OUTPUT);
    pinmode(ditCDIN, OUTPUT);    
    pinmode(ditCCLK, OUTPUT);    

    //Initialize UI pins
    pinmode(pinkPin, INPUT_PULLUP);
    pinmode(sinePin, INPUT_PULLUP);
    pinmode(ledPin, OUTPUT);

    AudioMemory(12);
    AudioNoInterrupts(); //Disable interrupts to change multiple settings all at once

    sine.amplitude(1.0);
    sine.frequency(1000.0);
    
    pink.amplitude(1.0);
    
    AudioInterrupts(); //Enable interrupts and update all settings
}

void loop() {
  // put your main code here, to run repeatedly:



}
