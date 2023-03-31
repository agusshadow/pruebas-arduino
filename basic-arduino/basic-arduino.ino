//digitalWrite = los valores son 0 o 1 que es lo mismo que LOW o HIGH
//analogWrite = los valores son de 0 a 255 puede varias el voltaje a enviar (al escribir) |

int redLed = 8;
int delayTime = 500;

void alternateLed (int pin, int delayTime) {

  digitalWrite(pin,HIGH);
  delay(delayTime);
  digitalWrite(pin,LOW);
  delay(delayTime);

}

void setup() {
  
  // primero recibe el pin y despues que se va a hacer (INPUT o OUTPUT)
  pinMode(redLed, OUTPUT);
  // inicializar Serial (consola) y poner el valor de 9600 por defecto
  Serial.begin(9600);
 
}

void loop() {

  alternateLed(redLed, delayTime);

}