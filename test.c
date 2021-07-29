#define ledPin 13
float value = -12590;
float time1; 
void setup() {
  Serial.begin(9600);
noInterrupts();    
TCCR1A = 0;
TCCR1B = 0;
TCNT1 = value;
TCCR1B |= (1 << CS10)|(1 << CS12);   
TIMSK1 |= (1 << TOIE1); 
interrupts();                              
  // put your setup code here, to run once:

}

void loop() {
  int x;
  x=TCNT1;
  Serial.println(x);
 
 
 
  // put your main code here, to run repeatedly:

}
ISR(TIMER1_OVF_vect)                   
{ //Serial.println("T");
  TCNT1 =value;                               
  digitalWrite(ledPin, digitalRead(ledPin) ^ 1); 
}
