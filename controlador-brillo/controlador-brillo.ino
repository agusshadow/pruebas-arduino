int redLed = 7;
int yellowLed = 8;

int potPin = A1;
float val;
int ligth;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // leo el valor del pin y lo guardo en val
  val = analogRead(potPin);

  // paso el tipo de dato a la variable ligth
  ligth = map(val,0,1023,0,255);

  // escribo en el led rojo con la variable ligth
  analogWrite(redLed, ligth);
  analogWrite(yellowLed, ligth);

  Serial.println(ligth);
  delay(100);
  //analogWrite(redLed, val);
}
