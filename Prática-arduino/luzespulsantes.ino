/*
    Descrição: O objetivo é manipular o led de outras formas
    autor: Bruna Landim 
    data: 16/02/2021
*/

int ledVerde = 11;
float sinVal;
int ledVal;

void setup()
{
    pinMode (ledVerde,OUTPUT);

}

void loop()
{
    for (int x=0; x < 180; x++)
    {
        sinVal = (sin(x *(3.1416/180)));
        ledVal = int(sinVal*255);
        analogWrite(ledVerde,ledVal);
        delay(25);
    }
}