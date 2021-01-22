/*
    Descrição:
    Na aula de hoje, trabalhamos com a sintaxe for, outra estrutura de repetição.

*/

void setup(){

    Serial.begin(9600);
}

void loop(){

    for(int x = 0; x < = 10; x++)

        Serial.println(x);
        Serial.println("");
        Serial.println("FIM!!"); 

}


/*Outro exemplo de projeto usando estrutura de repetição for*/

int a = 0;

void setup(){

    Serial.begin(9600);
    pinMode(13,OUTPUT);
}

void loop(){

    for(int x = 0; x <= 10; x++ ){

        Serial.println(x);
        digitalWrite(13,HIGH);
        delay(1000);
        digitalWrite(13,LOW);
        delay(1000);

    }
    
    Serial.println("FIM");
    while(a < 100){
        delay(500);
        a++;
    }
}