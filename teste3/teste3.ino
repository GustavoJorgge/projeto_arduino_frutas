
 int ledVermelho=2;
 int ledVerde=3;

 int maca=A0;
 int banana=A1;
 int pera=A2;
 int manga=A3;
 
 int valormaca=0;
 int valorbanana=0;
 int valorpera=0;
 int valormanga=0;

 
void setup() {
  // put your setup code here, to run once:
pinMode(ledVermelho, OUTPUT); //errado
pinMode(ledVerde, OUTPUT); // correto

pinMode(maca, INPUT);
pinMode (banana,INPUT);
pinMode (pera,INPUT);
pinMode (manga,INPUT);


Serial.begin(9600);
}

void loop() {
  
valormaca= digitalRead(maca);
valorbanana= digitalRead(banana);
valorpera= digitalRead(pera);
valormanga= digitalRead(manga);

        
(valormaca==0)&& (valorbanana==0)&&(valorpera==0)&&(valormanga==0); // se a pessoa nao encostar em nenhuma fruta, nenhum led acende
digitalWrite(ledVerde, LOW);
digitalWrite(ledVermelho, LOW);                
                
                
       //alguma pergunta qualquer 
                  if (valormaca==1) {
                      digitalWrite(ledVerde, HIGH); // CORRETO, incrementar no correto
                      digitalWrite(ledVermelho, LOW);
                  }else{
                       digitalWrite(ledVerde,LOW);
                       digitalWrite(ledVermelho,HIGH); // ERRADO, incrementar no errado
                  
                  }
       //alguma pergunta qualquer
    
                  if (valorbanana==1) {
                      digitalWrite(ledVerde, HIGH); // CORRETO
                      digitalWrite(ledVermelho, LOW);
                  }else{
                       digitalWrite(ledVerde,LOW);
                       digitalWrite(ledVermelho,HIGH); // ERRADO
                  
                    }
        //alguma pergunta qualquer
    
                   if (valorpera==1) {
                      digitalWrite(ledVerde, HIGH); // CORRETO
                      digitalWrite(ledVermelho, LOW);
                  }else{
                       digitalWrite(ledVerde,LOW);
                       digitalWrite(ledVermelho,HIGH); // ERRADO
                  
                  }
    
         //alguma pergunta qualquer
    
                  if (valormanga==1) {
                      digitalWrite(ledVerde, HIGH); // CORRETO
                      digitalWrite(ledVermelho, LOW);
                  }else{
                       digitalWrite(ledVerde,LOW);
                       digitalWrite(ledVermelho,HIGH); // ERRADO
                  
                  }


                  
                
         valorbanana= analogRead(banana);
  }
             
     
        

/* estadobotao2= digitalRead(botao2);
       if (estadobotao1==1){
            digitalWrite(ledVerde,1);
      }else{
            digitalWrite(ledVerde,0); 
      }
 */


