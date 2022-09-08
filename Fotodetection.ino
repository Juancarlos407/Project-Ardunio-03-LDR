
int A=9; //Led//
int foto=3; //Fotoresistencia en el pin analogo A3//
int measure=0;
int light=0;

void setup()
{
 {
  pinMode(A,OUTPUT); //declaramos los leds como salidas//
 }
}

void loop() 
{
 measure=analogRead (foto); //lectura de la fotoresistencia//
 Serial.println("Lectura ");
 Serial.println(measure);
 delay (500); //determina tanto el tiempo de reaccion como la lectura de datos//
 light=(255-measure/4); //Para encender los leds con luminosidad el pin tras la resistencia, para lo contrario entre los dos componentes//
 Serial.println("Luminosidad ");
 Serial.println(light);
 delay (500);
 {
  analogWrite(A,light);
 }
}
