int led=9;
int botao = A0;
int estadoBotao = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
  pinMode (botao, INPUT);
  Serial.begin(9600);
  digitalWrite(led, 0);
  delay(1000);
}

void loop() {
    // put your main code here, to run repeatedly:
    
    estadoBotao = analogRead(botao);
    /*if (Serial.available()) {
      int qtd= Serial.parseInt();
      for ( int i=1; i<=qtd; i++) {
        digitalWrite(led, 1);
        delay(500);
        digitalWrite(led, 0);
        delay(500);
      }
    }
    */
    Serial.println(estadoBotao);
    if (estadoBotao <950){
        digitalWrite(led, 1);
        Serial.println("ligado");
    }else{
        digitalWrite(led, 0);
        Serial.println("desligado");
    }
    
    delay(500);
}

