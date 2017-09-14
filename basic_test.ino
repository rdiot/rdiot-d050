/* 6bits Multicolor Rapid Prototyping LED [D050] : http://rdiot.tistory.com/217 [RDIoT Demo] */

int D1 = 13;//White
int D2 = 12;//Blue
int D3 = 11;//Chartreuse
int D4 = 10;//Yellow
int D5 = 9;//Pink
int D6 = 8;//Red
 
int GND = 7;//GND
int D11 = 6;//White
int D12 = 5;//Blue
int D13 = 4;//Chartreuse
int D14 = 3;//Yellow
int D15 = 2;//Pink
int D16 = 1;//Red
 
int i;

void setup() {                
pinMode(D1, OUTPUT);   
pinMode(D2, OUTPUT); 
pinMode(D3, OUTPUT);  
pinMode(D4, OUTPUT);  
pinMode(D5, OUTPUT);  
pinMode(D6, OUTPUT); 
 
pinMode(D11, OUTPUT);   
pinMode(D12, OUTPUT); 
pinMode(D13, OUTPUT);  
pinMode(D14, OUTPUT);  
pinMode(D15, OUTPUT);  
pinMode(D16, OUTPUT);  
pinMode(GND, OUTPUT);  
digitalWrite(GND, LOW); 
}
 
 
// the loop routine runs over and over again forever:
void loop() {
  
  //White LED light than any other color lights, so reducing the brightness
  for(i=0;i< ms_cnt/6;i++)
  {
  digitalWrite(D1, HIGH);   
  delay(1);              
  digitalWrite(D1, LOW);    
  delay(5);               
  }
  
  digitalWrite(D2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ms_cnt);               // wait for a Millisecond
  digitalWrite(D2, LOW);    // turn the LED off by making the voltage LOW
  
  digitalWrite(D3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ms_cnt);               // wait for a Millisecond
  digitalWrite(D3, LOW);    // turn the LED off by making the voltage LOW
 
  digitalWrite(D4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ms_cnt);               // wait for a Millisecond
  digitalWrite(D4, LOW);    // turn the LED off by making the voltage LOW
  
  digitalWrite(D5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ms_cnt);               // wait for a Millisecond
  digitalWrite(D5, LOW);    // turn the LED off by making the voltage LOW
  
  digitalWrite(D6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(ms_cnt);               // wait for a Millisecond
  digitalWrite(D6, LOW);    // turn the LED off by making the voltage LOW
  
  //White LED light than any other color lights, so reducing the brightness
  for(i=0;i< ms_cnt/6;i++)
  {
    digitalWrite(D11, HIGH);   
    delay(1);              
    digitalWrite(D11, LOW);    
    delay(5);               
  } 

  digitalWrite(D12, HIGH); 
  delay(ms_cnt); 
  digitalWrite(D12, LOW); 
  
  digitalWrite(D13, HIGH); 
  delay(ms_cnt);
  digitalWrite(D13, LOW); 
 
  digitalWrite(D14, HIGH); 
  delay(ms_cnt); 
  digitalWrite(D14, LOW); 
  
  digitalWrite(D15, HIGH); 
  delay(ms_cnt); 
  digitalWrite(D15, LOW); 
  
  digitalWrite(D16, HIGH); 
  delay(ms_cnt); 
  digitalWrite(D16, LOW); 
}
