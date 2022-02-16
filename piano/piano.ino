int fruta0 = A0;
int fruta1 = A1;
int fruta2 = A2;
int fruta3 = A3;
int fruta4 = A4;
int fruta5 = A5;
int estadoFruta0 = 0;
int estadoFruta1 = 0;
int estadoFruta2 = 0;
int estadoFruta3 = 0;
int estadoFruta4 = 0;
int estadoFruta5 = 0;
int pinoFalante = 9;
int duracao = 3000;
int frequencia=0 ;

void setup() {
  pinMode (fruta1, INPUT);
  pinMode (fruta2, INPUT);
  pinMode (fruta3, INPUT);
  pinMode (fruta4, INPUT);
  pinMode (fruta5, INPUT);
  pinMode (fruta0, INPUT);

  pinMode(pinoFalante, OUTPUT);
  Serial.begin(9600); //inicialização do monitor serial 
    delay(1000);
}

void loop() {

    estadoFruta0 = analogRead(fruta0);
    estadoFruta1 = analogRead(fruta1);
    estadoFruta2 = analogRead(fruta2);
    estadoFruta3 = analogRead(fruta3);
    estadoFruta4 = analogRead(fruta4);
    estadoFruta5 = analogRead(fruta5);


    Serial.println(estadoFruta0); //imprime o valor estadoFruta0 no monitor serial 
    

    if (estadoFruta0 <950){
        tone(pinoFalante, 2093, duracao);
        delay(duracao);
        noTone(pinoFalante); 
        
    }else if (estadoFruta1 <950){
        tone(pinoFalante, 2349, duracao);
        delay(duracao);
        noTone(pinoFalante); 
    
    }else if(estadoFruta2 <950){
            tone(pinoFalante, 2637, duracao);
            delay(duracao);
            noTone(pinoFalante); 
            
    }else if(estadoFruta3 <950){
            tone(pinoFalante, 2794, duracao);
            delay(duracao);
            noTone(pinoFalante);
             
    }else if(estadoFruta4 <950){
            tone(pinoFalante, 3136, duracao);
            delay(duracao);
            noTone(pinoFalante);
            
    } else if(estadoFruta5 <950){
            tone(pinoFalante, 3520, duracao);
            delay(duracao);
            noTone(pinoFalante); 
    }

}
