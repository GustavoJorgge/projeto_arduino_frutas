
 int ledVermelho=2;
 int ledVerde=3;

 int banana=A0; 
 int estadobanana=0;
// int botao2=8;

// int estadobotao2=1; ( OUTRA FRUTA )
 
void setup() {
  // put your setup code here, to run once:
pinMode(ledVermelho, OUTPUT);
pinMode(ledVerde, OUTPUT);
pinMode(banana, INPUT);

//pinMode(botao2, INPUT);   ( OUTRA FRUTA )
Serial.begin(9600);
}

void loop() {
 estadobanana= analogRead(banana);

        if (estadobanana<600){
            digitalWrite(ledVerde, LOW);
            digitalWrite(ledVermelho, LOW);
        }else if (estadobanana>700){
             digitalWrite(ledVerde,LOW);
             digitalWrite(ledVermelho,HIGH);
        }else{
             digitalWrite(ledVerde,HIGH);
             digitalWrite(ledVermelho,LOW);
        }
       
            //digitalWrite(ledVerde,LOW);
               
Serial.println(estadobanana);
        

/* estadobotao2= digitalRead(botao2);
       if (estadobotao1==1){
            digitalWrite(ledVerde,1);
      }else{
            digitalWrite(ledVerde,0); 
      }
 */

}
