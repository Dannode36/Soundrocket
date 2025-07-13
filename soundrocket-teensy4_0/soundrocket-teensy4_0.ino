#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine1;          //xy=563.2000350952148,640.200029373169
AudioSynthNoisePink      pink1;          //xy=563.2000350952148,679.2000331878662
AudioMixer4              mixer1;         //xy=881.1999969482422,658.1999969482422
AudioOutputI2S           i2s1;           //xy=1052.1999816894531,658.200029373169
AudioConnection          patchCord1(sine1, 0, mixer1, 0);
AudioConnection          patchCord2(pink1, 0, mixer1, 3);
AudioConnection          patchCord3(mixer1, 0, i2s1, 0);
AudioConnection          patchCord4(mixer1, 0, i2s1, 1);
// GUItool: end automatically generated code


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
