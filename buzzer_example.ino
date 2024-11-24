
int BUZZER_PIN = 2;       // digital pin for Buzzerkl




void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT);  // configure digital pin as output

  // tone( pin,
  //       frequency (Hz)
  //       duration (ms)
  //      )
  long note_duration = 500;    // milliseconds
   
  tone(BUZZER_PIN, 262, note_duration);  // start the tone
  delay(note_duration);                  // wait for tone to finish
  noTone(BUZZER_PIN);                    // stop the tone (not needed 
                                         // if waiting to finish)

  tone(BUZZER_PIN, 330, note_duration); 
  delay(note_duration);  
  noTone(BUZZER_PIN);     

  tone(BUZZER_PIN, 392, note_duration); 
  delay(note_duration);  
  noTone(BUZZER_PIN);    
}

void loop() {
  // put your main code here, to run repeatedly:

}
