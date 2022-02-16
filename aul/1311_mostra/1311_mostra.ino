int ledVermelho=2;
int ledVerde=3;

int fruta0=7;
int fruta1=8;

int estadofruta0=2000;
int estadofruta1=2000;
int resposta=100;

void setup() {
  pinMode (ledVermelho, OUTPUT);
  pinMode (ledVerde, OUTPUT);
  pinMode (fruta0, INPUT);
  pinMode (fruta1, INPUT);
  Serial.begin(9600);
  digitalWrite(ledVermelho, 0);
  digitalWrite(ledVerde, 0);
  delay(1000);
}

void loop() {

    if (Serial.available()) {
        resposta = Serial.parseInt();
        digitalWrite(ledVerde,0);
        digitalWrite(ledVermelho,0);
        estadofruta0=2000;
        estadofruta1=2000;
    }


    
    // estadofruta0=analogRead(fruta0);
    estadofruta0=digitalRead(fruta0);
    estadofruta1=digitalRead(fruta1);

    Serial.print("estadofruta0 = "); 
    Serial.println(estadofruta0); 
    Serial.print("estadofruta1 = "); 
    Serial.println(estadofruta1); 


     //if(estadofruta0<950){   
     if(estadofruta0==0){
          if (resposta==0){
             digitalWrite(ledVerde,1);
             digitalWrite(ledVermelho,0);
          }else{
             digitalWrite(ledVerde,0);
             digitalWrite(ledVermelho,1);
          }
     }
     else
        if(estadofruta1==0){
              if (resposta==1){
                 digitalWrite(ledVerde,1);
                 digitalWrite(ledVermelho,0);
              }else{
                 digitalWrite(ledVerde,0);
                 digitalWrite(ledVermelho,1);
              }
        }
       
 
 
  delay(1000);
}
