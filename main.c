
#define AMP 5 
#define TIME_PERIOD 10
float output=0;
float time=0;
#define frequency (1/TIME_PERIOD)

void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
Serial.begin(9600);


}

void loop() {
  
   time=time+ //TIME IN SECONDS IF SYSTEM CLOCK IS 16 MHZ
  Serial.println(t);
  // put your main code here, to run repeatedly:

}
void sinwave(void)
{
Serial.println(sin(2*100*PI*time));
}
