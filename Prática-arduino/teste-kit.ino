/*
    Descricao: repetindo o exercício com estruturas de repetição
    autor: Bruna Landim
    data: 30/05/2021
*/

byte ledBlue [] = {4,5,6,7,8}
int ledDelay(100);
int direction = 1;
int currentLed = 0;
unsigned long mudarTempo; 

void setup()
{
    for (int x=0; x < 5 ; x++)
    pinMode(ledBlue[x], OUTPUT);
    mudarTempo = millis();
}

void mudarLed()
{
    for(int x = 0; x < 5; x++)
    {
        digitalWrite(ledBlue[x], LOW);
    }

    digitalWrite(ledBlue[currentLed], HIGH);
    currentLed += direction; 
    if(currentLed == 4) { direction = -1};
    if(currentLed == 0) { direction = 0};
}

void loop()
{
    mudarLed();
    mudarTempo = millis();
}