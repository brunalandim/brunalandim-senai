/*
    Descrição:
        Esse projeto tem como objetivo fazer um Sinalizador de código Morse S.O.S, ele está dentro do livro "Arduíno Básico(Michael McRoberts)".

        autor: Bruna Landim
        data: 22/01/2021

*/

/*
    Descrição:
        Esse projeto tem como objetivo fazer um Sinalizador de código Morse S.O.S, ele está dentro do livro "Arduíno Básico(Michael McRoberts)".

        autor: Bruna Landim
        data: 23/01/2021
        alteração: 7h50 -- inseri um segundo Led

*/

int ledPin = 10;

int ledPin2 = 9;

void setup()
{
    pinMode(ledPin,OUTPUT);
  	pinMode(ledPin2,OUTPUT);
}

void loop()
{
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(ledPin, HIGH);
        delay(400);
        digitalWrite(ledPin,LOW);
        delay(100);
      
        digitalWrite(ledPin2, HIGH);
        delay(400);
        digitalWrite(ledPin2,LOW);
        delay(100);
    }
        delay(100);
   
    for(int x = 0; x < 3; x ++)
    {
        digitalWrite(ledPin, HIGH);
        delay(400);
        digitalWrite(ledPin,LOW);
        delay(100);
      
      
        digitalWrite(ledPin2, HIGH);
        delay(400);
        digitalWrite(ledPin2,LOW);
        delay(100);
    }    
   
   		delay(100);
    
  for(int x = 0; x < 3; x ++)
    {
        digitalWrite(ledPin, HIGH);
        delay(150);
        digitalWrite(ledPin,LOW);
        delay(100);
    
        digitalWrite(ledPin2, HIGH);
        delay(150);
        digitalWrite(ledPin2,LOW);
        delay(100);
    }    

    	delay(5000);
}