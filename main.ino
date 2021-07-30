
#define AMP 5
float output = 0;
int miliseconds = 0;
#define frequency 0.1
//bool state=false;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  Serial.begin(115200);


}

void loop() {

  // time = time + 0.00005; //TIME IN SECONDS IF SYSTEM CLOCK IS 16 MHZ
  sinwave();
 
  // put your main code here, to run repeatedly:

}
void sinwave(void)
{
  miliseconds = millis();
  int t = 0;
  while (t < 10000)
  {
    Serial.println(5 * sin(2 * PI * frequency * t * 0.001));
    t = millis() - miliseconds;
   // Serial.println();
  }

  miliseconds = 0;

}
