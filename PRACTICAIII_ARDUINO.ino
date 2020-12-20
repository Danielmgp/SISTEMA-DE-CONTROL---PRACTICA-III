const int LED=13;
const int LED1=12;
const int LED2=11;
const int LED3=10;
void setup() {
pinMode(LED,OUTPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
//Inicializa el puerto serie
Serial.begin(9600);
}
void loop() {
int lectura;
lectura = analogRead(0); //Toma lectura del ADC
Serial.print(lectura); //Envía el dato leído
delay(500); //Genera un retardo breve
if (lectura<20)
{
digitalWrite(LED,LOW);
}
if (lectura>20 && lectura < 341)
{
digitalWrite(LED,HIGH);
digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
}
if (lectura > 341 && lectura < 682)
{
digitalWrite(LED,HIGH);
digitalWrite(LED1,HIGH);
digitalWrite(LED2,LOW);
}
if (lectura > 682)
{
digitalWrite(LED,HIGH);
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
}
 
 if (lectura < 1023)
  {
    digitalWrite(LED3,HIGH);   
  }
else
{  digitalWrite(LED3,LOW); 
}}
