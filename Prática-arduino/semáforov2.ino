/*
    descrição:
        criar um semáforo interativo, onde inclui um botão. 
        Tem uma parte para pedestre e outra para veículos.
        autor: Bruna Landim
        Data:24/01/2021
        Alteração: 25/01/2021

*/

//definindo as variáveis

int veiVermelho = 13;
int veiAmarelo = 12;
int veiVerde = 11;

int pedVerde = 10;
int pedVermelho = 9; 
int button = 2;
int crossTime = 5000;
unsigned long mudarTempo;  

void setup()
{
    pinMode(veiVermelho,OUTPUT);
    pinMode(veiAmarelo,OUTPUT);
    pinMode(veiVerde,OUTPUT);

    pinMode(pedVerde,OUTPUT);
    pinMode(pedVermelho,OUTPUT);
    pinMode(button,INPUT_PULLUP);

    digitalWrite(veiVerde,HIGH);
    digitalWrite(pedVermelho,HIGH);
  	Serial.begin(9600);

}

void mostrarLuzes(){

 int estado = digitalRead(button);
      	Serial.println("batata frita");
      	Serial.println("");
      
       digitalWrite(veiVerde,LOW);
        digitalWrite(veiAmarelo,HIGH);
        delay(2000);

        digitalWrite(veiAmarelo,LOW);
        digitalWrite(veiVermelho,HIGH);
        delay(1000);

        digitalWrite(pedVermelho,LOW);
        digitalWrite(pedVerde,HIGH);
        delay(crossTime);
        for(int x = 0; x < 10; x++)
        {
            digitalWrite(pedVerde,HIGH);
            delay(250);
            digitalWrite(pedVerde,LOW);
          	delay(250);}
  

}


void loop()
  
{


    int estado = digitalRead(button);
    if(estado == HIGH && (millis() - mudarTempo) > 5000) 
{
      
       mostrarLuzes(); 
  
}
 

    
    digitalWrite(pedVermelho,HIGH);
    delay(500); 

    digitalWrite(veiAmarelo,HIGH); 
    digitalWrite(veiVermelho,LOW);
    delay(1000);
    digitalWrite(veiVerde,HIGH);
    digitalWrite(veiAmarelo,LOW);

    //mudarTempo = millis();
  	//resultado = (millis() - mudarTempo);
  	//Serial.println(mudarTempo);
  	//Serial.println(resultado);
 }