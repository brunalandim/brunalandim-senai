/*
Descrição:

    Projeto desenvolvido em aula para exercitar o WHILE e IF
    Data:21/01/2021
    Modificado: Bruna Landim 

*/

int chave = 7;
int ledverde = 10;
int ledvermelho = 8;

void setup(){
    
    pinMode(chave,INPUT_PULLUP);
    pinMode(ledverde,OUTPUT);
    pinMode(ledvermelho,OUTPUT);
}

void loop(){

    int estado = digitalRead(chave);
    while(estado == HIGH)
    {
        digitalWrite(ledverde, HIGH);
        delay(200);
        digitalWrite(ledverde,LOW);
        delay(200);

      digitalWrite(ledvermelho, HIGH);
        delay(200);
        digitalWrite(ledvermelho,LOW);
        delay(200);

        int estado = digitalRead(chave);

        if(estado == LOW)
        {
            break; //para o código, sair do loop do while 
        }
    }


}