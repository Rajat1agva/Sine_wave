
#define AMP 5 
#define TIME_PERIOD 0.01
float output=0;
float time=0;
#define frequency (1/TIME_PERIOD)

void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
Serial.begin(115200);


}

void loop() {
  
   time=time+0.000000625; //TIME IN SECONDS IF SYSTEM CLOCK IS 16 MHZ
   sinwave();
  // put your main code here, to run repeatedly:

}
void sinwave(void)
{
output=(AMP*sin(2*frequency*PI*time));
if(output>=0)
{
  Serial.println(output);

}
else
{
   Serial.println(0);
}
}
