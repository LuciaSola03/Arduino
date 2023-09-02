int pin_led_1 = 2;
int pin_led_2 = 3;
int pin_led_3 = 4;
int pin_led_arco_iris = 5;

void setup() 
{
  pinMode (pin_led_1, OUTPUT);
  pinMode (pin_led_2, OUTPUT);
  pinMode (pin_led_3, OUTPUT);
  pinMode (pin_led_arco_iris, OUTPUT);
}

void loop() 
{
  digitalWrite(pin_led_1, HIGH);
  delay (500);
  digitalWrite(pin_led_1, LOW);
  
  digitalWrite(pin_led_2, HIGH);
  delay (500);
  digitalWrite(pin_led_2, LOW);
  
  digitalWrite(pin_led_3, HIGH);
  delay (500);
  digitalWrite(pin_led_3, LOW);

  digitalWrite(pin_led_arco_iris, HIGH);
  delay (3000);
  digitalWrite(pin_led_arco_iris, LOW);
}
