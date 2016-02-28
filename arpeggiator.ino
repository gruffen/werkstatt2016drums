#include <werkstatt.h>


//arpeggiator arpeggiator(6, 5); //initiate and name the arpeggiator class (Output pin)
volumecontrol volumecontrol(3);
//frequencyScale frequencyScale(6);

/* 
notes are assigned in intervals: tonic, minor2nd, major2nd, minor3rd,
major3rd, fourth, tritone, fifth, minor6th, major6th, minor7th,
major7th, octave. 
*/
  int notes[] = {tonic, minor2nd}; // VCO EXP config
  int note = tonic;


// note values: w, h, q, qt, e, et, sx, sxt, th, sxf 
  int note_values[] = {e, e, e, e, sx}; //VCO EXP config
  int note_value = sxf;
  int volume =  200;

  
void setup() {
}      

//sizeof(notes)/sizeof(int)
void loop() {
 //volumecontrol.offOn(120);
for (int i = 0; i < ( sizeof(notes)/sizeof(int) ); i++)
  {
   //define a BPM and run the arpeggiator.play function  
   arpeggiator.play(140, note, note_value, volume); 

   volume = volume - 255;
   note = note + 2;
   //frequencyScale   .changePitch(notes[i]);
   
   }
}
 





