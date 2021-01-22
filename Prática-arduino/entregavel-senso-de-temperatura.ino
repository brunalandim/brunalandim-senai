/*
    Descrição:
        Entregável da Aula 90. Criar um projeto com sensor de temperatura, 
        testando as estruturas que foram aprendidas em sala de aula

        autor: Bruna Landim 
        data: 22/01/2021

*/

//NÃO ALTERAR------------------------------------------------------------------------------------------------
float temperatura; //Variável que vai amarmazenar a informações sobre a temperatura do sensor
int pinoAnalogico0 = 0;
//NÃO ALTERAR------------------------------------------------------------------------------------------------
int chave = 13; 
  
void setup() {
 
    pinMode(2,OUTPUT); // TEMPERATURA MENOR OU IGUAL A 25ºC LED VERDE 
    pinMode(3,OUTPUT); // TEMPERATURA ENTRE 25ºc E 70ºC LED AMARELO
    pinMode(4,OUTPUT); // TEMPERATURA MAIOR QUE 70ºC LED VERMELHO
    pinMode(chave,INPUT_PULLUP);
  //NÃO ALTERAR------------------------------------------------------------------------------------------------
    Serial.begin(9600); //Inicia o monitor Serial
    pinMode(A0,INPUT); //Define o pino A0 como entrada
  //NÃO ALTERAR------------------------------------------------------------------------------------------------

}

void loop() {
  int estado = digitalRead(chave);
 //NÃO ALTERAR------------------------------------------------------------------------------------------------
  temperatura = ((analogRead(pinoAnalogico0) * (5.0/1024))-0.5)/0.01; //Executa a leitura da temperatura e armazena na variável 'temperatura'
  
  //Exibe no Monitor Serial a temperatura do Rack
  Serial.print("A temperatura do Rack esta em: "); 
  Serial.print(temperatura);
  Serial.print(char(176));
  Serial.println("C");
  delay(1000); //Aguarde 1 segundo
  //NÃO ALTERAR------------------------------------------------------------------------------------------------

while (estado == HIGH){
   temperatura = ((analogRead(pinoAnalogico0) * (5.0/1024))-0.5)/0.01; 
  
  if(temperatura <= 25)
  {
      digitalWrite(2,HIGH);
      Serial.println("sua temperatura:");
      delay(1000);
      Serial.println(temperatura);
  }
  else{
    digitalWrite(2,LOW); 
  }

    if(temperatura >= 25 && temperatura < 70)
  {
      digitalWrite(3,HIGH);
      Serial.println("sua temperatura:");
      delay(1000);
      Serial.println(temperatura);
  }
  else
  {
    digitalWrite(3,LOW);
  }
  
  
    if(temperatura > 70)
  {
      digitalWrite(4,HIGH);
      Serial.println("sua temperatura:");
      delay(1000);
      Serial.println(temperatura);
  }
  
  else 
  {
    digitalWrite(4,LOW); 
  }
  
    int estado = digitalRead(chave);

       if (estado == LOW)
    {
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);  
        break; 
    }
}
  
 
 

}