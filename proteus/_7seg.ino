void setup() {
  
  Serial.begin(9600);
  
  
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

}





void loop()

{
//FOR ZERO
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
delay(1000);

//FOR ONE
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
delay(1000);

//FOR TWO

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10,LOW);
delay(1000);

//FOR THREE

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10,HIGH);
delay(1000);

//FOR FOUR

digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11,  LOW);
digitalWrite(10, LOW);
delay(1000);

//FOR FIVE
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11,  LOW);
digitalWrite(10,HIGH);
delay(1000);

  
}



