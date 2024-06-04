int led = 23;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  Serial.println("Mensagem: Led Acesso");
  delay(5000);    
                    // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  Serial.println("Mensagem: Led Apagado");
  Serial.println("-----------------------");
  delay(5000);                      // wait for a second
}
