/*
Descrição: AULA PRESENCIAL 

	Fazer um programa que calcula a média de duas notas, validar se
    o aluno foi reprovado ou aprovado. 
    
    LUZ VERDE --- VOCÊ FOI APROVADO
    LUZ AMARELA ---- RECUPERAÇÃO
    LUZ VERMELHA -- VOCÊ FOI REPROVADO
    NOTA DE REFERÊNCIA = 5
    
    autor: Bruna Landim
    Data de criação: 20/01/2021

*/


float n1,n2,media,soma;


void setup()
{

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
	n1= 2.7;
  	n2= 1.2;
  	soma= n1 + n2;
  	media= soma/2;
	
    Serial.println("soma das notas: ");
  	delay(1000);
	Serial.println(soma);
    delay(1000);  	
	Serial.println("sua media: ");
  	delay(1000);
    Serial.println(media);   
  
  if(media >= 7){
 	
    Serial.println("Foi APROVADO!"); 
    digitalWrite(3,HIGH);

    
    
                     
 } 
 
 if(media >=5 && media < 7) {

     Serial.println("Esta na RECUPERACAO!");
     digitalWrite(4,HIGH); 
                      
  }

  if (media < 5 ){
      Serial.println("Foi REPROVADO");
      digitalWrite(2,HIGH);
  }
    
  delay(5000);  
}