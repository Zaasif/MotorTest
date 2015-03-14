// declare all the pins for the two motors
int dirA = 12;
int dirB = 13;
int speedA = 3;
int speedB = 11;
int brakeA = 9;
int brakeB = 8;
void setup() {
  
  //Setup Channel A
  pinMode(dirA, OUTPUT); //Initiates Motor Channel A pin
  pinMode(brakeA, OUTPUT); //Initiates Brake Channel A pin
  
  //Setup Channel B
  pinMode(dirB, OUTPUT); //Initiates Motor Channel B pin
  pinMode(brakeB, OUTPUT); //Initiates Brake Channel B pin
}

void loop(){
  
  //Move forward
  digitalWrite(dirA, HIGH); //Change direction to forward for channel A
  digitalWrite(brakeA, LOW);   //Set brake to LOW for Channel A
  analogWrite(speedA, 255);   //Set Channel A at full speed
  
  digitalWrite(dirB, HIGH); //Change direction to forward for channel B
  digitalWrite(brakeB, LOW);   //Set brake to LOW for Channel B
  analogWrite(speedB, 255);   //Set Channel B at full speed
  
  delay(3000);
  
  digitalWrite(brakeA, HIGH); //Set brake to LOW for Channel A
  digitalWrite(brakeB, HIGH); //Set brake to LOW for Channel B
  delay(1000);
  
  //Reverse
  digitalWrite(dirA, LOW); //Change direction to backwards for channel A
  digitalWrite(brakeA, LOW);   //Set brake to LOW for Channel A
  analogWrite(speedA, 255);   //Set Channel A at full speed
  
  digitalWrite(dirB, LOW); //Change direction to backwards for channel B
  digitalWrite(brakeB, LOW);   //Set brake to LOW for Channel B
  analogWrite(speedB, 255);   //Set Channel B at full speed
  
  delay(3000);
  
  digitalWrite(brakeA, HIGH); // Stop Channel A
  digitalWrite(brakeB, HIGH); //Stop Channel B
  delay(1000);
  
}

