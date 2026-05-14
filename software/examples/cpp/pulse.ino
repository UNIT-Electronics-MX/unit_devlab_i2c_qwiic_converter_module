const int pulsePin = 6;      // GPIO6
const int tiempoAlto = 2000; // Tiempo en alto: 1000 ms = 1 segundo
const int tiempoBajo = 2000; // Tiempo en bajo: 1000 ms = 1 segundo

void setup() {
  pinMode(pulsePin, OUTPUT);
}

void loop() {
  digitalWrite(pulsePin, HIGH); // Pulso en alto
  delay(tiempoAlto);

  digitalWrite(pulsePin, LOW);  // Pulso en bajo
  delay(tiempoBajo);
}