String aa;
int com;
int stat;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  while(stat = Serial.available() > 0){
    
    delay(3);
    char a = Serial.read();
    aa += a;
    
  }
  if (aa.length() > 0){
    Serial.println(aa + "0");
  }
  aa = "";
  
  
}

