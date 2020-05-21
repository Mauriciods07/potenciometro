int brillo;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // Lecutra del potenciometro [0 - 1023] 
  // Escritura [0 - 255] es todo lo que puede recibir
  brillo = analogRead(A0);
  delay(20);
  
  if((brillo <= 341)){
    analogWrite(3,brillo/1.3);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    }
  
  if((brillo > 341) && (brillo <= 682)){
    brillo = brillo - 342;
    digitalWrite(3, HIGH);
    digitalWrite(6, LOW);
    analogWrite(5, brillo/1.3);
}
    
  if((brillo > 682) && (brillo <= 1023)){
    brillo = brillo - 683;
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    analogWrite(6,brillo/1.3);
  }
}
