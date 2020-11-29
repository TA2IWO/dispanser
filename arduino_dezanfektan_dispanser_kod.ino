#define sensor 7
#define pompa 6
#define valf 9
int bekle = 1000;
int el_dez;

void setup(){
  pinMode(pompa,OUTPUT);  
  pinMode(sensor,INPUT);
  pinMode(pompa,HIGH); 
  pinMode(valf, OUTPUT); 
 
}

void loop(){
  
  boolean el = digitalRead(sensor);
  if(el_dez==0){
  if(el == LOW) el_dez=1;
  if(el_dez==1){digitalWrite(pompa,HIGH);
  digitalWrite(valf, HIGH);
  }
  
 }
  if(el==HIGH) el_dez=0;
  delay(500);
  digitalWrite(pompa,LOW);
 bekle = millis();
  digitalWrite(valf, LOW);
  
 }  
