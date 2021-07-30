#define ledpin 13
#define AMPLITUDE 5   //Amplitude value
#define AMP ((AMPLITUDE*255)/5)//
#define frequency 0.1 //frequency of sine wave
float output = 0;
int miliseconds = 0;
float amp_value=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {

 sinwave();
 
}
void sinwave(void)
{
  miliseconds = millis();
  int t = 0;
  while (t < 10000)
  { output=AMP* sin(2 * PI * frequency * t * 0.001);
     Serial.println(output);
    if(output>=0)
    {
      analogWrite(ledpin,output);
    }
    else
    {
      analogWrite(ledpin,0);
    }
    t = millis() - miliseconds;
   
  }

  miliseconds = 0;

}
