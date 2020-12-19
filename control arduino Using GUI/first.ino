void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()){

         char val = Serial.read();

         if(val == 'r'){
             digitalWrite(11,HIGH);
         }
          if(val == 'b'){
             digitalWrite(10,HIGH);
         }
          if(val == 'y'){
             digitalWrite(12,HIGH);
         }

         if(val == 'f'){
             digitalWrite(11,LOW);
             digitalWrite(12,LOW);
             digitalWrite(10,LOW);
         }
    }
}
