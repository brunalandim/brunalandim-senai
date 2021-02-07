/*
    descrição:
        Efeito de iluminação sequencial com LEDs como 
        na série Super Máquina, o carro do Kitt. 
        A principal alteração foi colocar um pontenciômetro, 
        assim, foi preciso incluir mais uma variável. 
    
        autor: Bruna Landim 
        data: 25/01/2021
        alteração:07/02/2021
*/

byte ledRed [] = {4,5,6,7,8,9,10,11,12,13};
int ledDelay;
int direcao = 1;
int currentLED = 0;
unsigned long mudarTempo;
int potPin = 2;

void setup()
{
    for (int x = 0; x < 10; x++)
    {
      pinMode(ledRed[x],OUTPUT);}
      mudarTempo = millis();
   

   
}

void mudarLed()
{
    for(int x = 0; x < 10; x++)
    {
        digitalWrite(ledRed[x],LOW);

    }

     digitalWrite(ledRed[currentLED], HIGH);
    currentLED += direcao;
    if(currentLED == 9) {direcao = -1;}
    if(currentLED == 0) {direcao = 1;}
}

void loop()
{
  ledDelay = analogRead(potPin);  // inclusão do pontenciômetro
  if((millis() - mudarTempo) > ledDelay)
    {
        mudarLed();
        mudarTempo = millis(); 
    }
}
