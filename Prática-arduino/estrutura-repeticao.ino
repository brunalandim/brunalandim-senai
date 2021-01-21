/* aula de estrutura de repetição*/

int x = 0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    Serial.println(x);
    delay(2000);
    x++; // incremento acrescenta mais um 
    Serial.println(x);
    delay(2000);
    x--; // decremento diminui menos um 
    Serial.println(x);
    delay(2000);
}

// outro exemplo aqui


void setup(){
    Serial.begin(9600);

}

void loop(){
int var = 0;
while(var < 20){
    Serial.println(var);
    delay(1000);
    var++;
}

}

// outro exemplo aqui 

void setup(){
    Serial.begin(9600);

}

void loop(){
int var = 0;
while(var < 20){
    Serial.println(var);
    delay(1000);
    var++;
}

}



