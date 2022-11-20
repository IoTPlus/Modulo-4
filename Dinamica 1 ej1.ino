void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  //Serial.begin(9600);
}

int value=3;
void loop() {
  digitalWrite(2, value & 0x08);
  digitalWrite(3, value & 0x04);
  digitalWrite(4, value & 0x02);
  digitalWrite(5, value & 0x01);
  delay(200);
  value=12;
  digitalWrite(2, value & 0x08);
  digitalWrite(3, value & 0x04);
  digitalWrite(4, value & 0x02);
  digitalWrite(5, value & 0x01);
  delay(200);
  value=3;
}

/*
Inicialmente ingresa al loop value=3, este se transforma a binario "00000011" y en la primera parte se extraen los 4 bits de menor significancia y según
su estado encenderá los leds correspondientes, en este caso los de pines 4 y 5, despues value=12 tiene equivalencia "00001100", nuevamente al extraer los
4 bits de menor significancia hace que se enciendan los leds de pines 2 y 3, se ejecuta el ciclo en forma permanente con 200 ms entre cada estado. 
*/