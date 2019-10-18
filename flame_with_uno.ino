/*
 *  Code BY: Haydar ElAmeer
 *  Team Name: Fire Fighter
 */

int Flame_pin = 7;
int led_pin = 13;
int flame_value;

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (Flame_pin , INPUT);
pinMode (led_pin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
flame_value = digitalRead (Flame_pin);
Serial.println (flame_value);
if (flame_value == HIGH){
  digitalWrite (led_pin, HIGH);
  Serial.println ("Alert : Fire is Burning!!"); // If you want to activate Serial Monitor
  }
  else {
    digitalWrite (led_pin , LOW);
    }
    delay (1000);
}
