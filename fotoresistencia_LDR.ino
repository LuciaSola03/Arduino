/*  ejemplo de medidor de luz utilizando una fotoresistencia 
 *  LDR y un grupo de leds para mostrar el resultado de las 
 *  lecturas.
*/
// donde se conectan los leds
int pin_led_1 = 2;
int pin_led_2 = 3;
int pin_led_3 = 4;

// pin analogoco de entrada para el LDR
int pin_LDR = 0;
// variale donde se almacena el valor del LDR
int valor_LRD = 0;  

void setup() 
{
  // configuracion de los pines donde se conectan los leds
  pinMode (pin_led_1, OUTPUT);
  pinMode (pin_led_2, OUTPUT);
  pinMode (pin_led_3, OUTPUT);

  // configuracion de puerto serial
  Serial.begin(9600);
}

void loop() 
{
  // apaga todos los leds siempre que se inicia el ciclo
  digitalWrite(pin_led_1, LOW);
  digitalWrite(pin_led_2, LOW);
  digitalWrite(pin_led_3, LOW);

  /*  guardamos el valor leido del ADC en una variable
   *  el valor leido por el ADC (voltaje) aumenta de manera 
   *  directamente proporcional.
  */
  // luz percibida por el LDR
  valor_LRD = analogRead(pin_LDR);

  // devolver el valor leido a nuestro monitor serial en el IDE de arduino
  Serial.println(valor_LRD);

  // encender los leds apropiados de acuerdo al valor de ADC 
  if (valor_LRD > 256)
  {
    digitalWrite(pin_led_1, HIGH);
  }
  else if (valor_LRD > 512)
  {
    digitalWrite(pin_led_2, HIGH);
  }
  else if (valor_LRD > 768)
  {
    digitalWrite(pin_led_3, HIGH);
  }

  // espera unos milisegundos antes de actualizar
  delay(200);
}
