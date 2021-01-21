/* esse projeto com arduino serve para praticar estrutura de decisão.

    descrição do exercício:
    Desenvolver um programa para efetuar a leitura de uma variável 'temperatura', verificar o valor contido nela e piscar um dos seguintes LEDs.
        LED VERDE - Temperatura menor ou igual a 25º
        LED AMARELO - Temperatura maior que 25°C E menor ou igual a 70°C
        LED VERMELHO - Temperatura maior que 70°C
    
    O programa também deve exibir no Monitor Serial o valor da Temperatura.


 nome autor: Bruna Landim 
 início: 19/01/2021
*/

float temperatura_padrao;



void setup(){

    pinMode(2,OUTPUT); // TEMPERATURA MENOR OU IGUAL A 25ºC LED VERDE 
    pinMode(3,OUTPUT); // TEMPERATURA ENTRE 25ºc E 70ºC LED AMARELO
    pinMode(4,OUTPUT); // TEMPERATURA MAIOR QUE 70ºC LED VERMELHO

    Serial.begin(9600); 

}

void loop(){
    
    temperatura_padrao = 38.0;

if (temperatura_padrao <= 25.0){
    digitalWrite(2,HIGH);
    Serial.println("sua temperatura:");
    delay(1000);
    Serial.println("");
    delay(1000);
    Serial.println(temperatura_padrao);
}

if (25 >= temperatura_padrao && 70 <= temperatura_padrao){
    digitalWrite(3,HIGH);
    Serial.println("sua temperatura:");
    delay(1000);
    Serial.println("");
    delay(1000);
    Serial.println(temperatura_padrao);
}

if (temperatura_padrao >= 70.0){
    digitalWrite(4,HIGH);
    Serial.println("sua temperatura:");
    delay(1000);
    Serial.println("");
    delay(1000);
    Serial.println(temperatura_padrao);
}


}