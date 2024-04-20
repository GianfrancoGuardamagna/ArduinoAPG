void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  float moisture = analogRead(A2);

    if (moisture > 306){
      digitalWrite(8, HIGH);
      delay(1500);
      digitalWrite(8, LOW);
    }else{
      digitalWrite(8, LOW);
    }
  
Serial.println(moisture);
delay(1000);
}

//Measures of the detector
//510 dry //306 60%
//210 wet
