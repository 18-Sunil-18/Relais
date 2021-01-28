int TMP36 = A0;
int sensorwert;
int temperatur = 0;
int t = 500;
int relais = 6;

void setup() {
  Serial.begin(9600);
  pinMode(relais, OUTPUT);	// Relais als OUTPUT
}

void loop() {
  sensorwert = analogRead(TMP36);	// Temperatur auf Variabel abspeichern
  temperatur = map(sensorwert, 0, 410, -50, 150);	// Temperatur umrechnen
  delay(t);	// Pause
  Serial.print(temperatur);	// Im Seriellen Monitor anzeigen
  Serial.println(" Grad Celsius");

  // Schleife zum Temperatur messen
  if(temperatur >= 25){		// Wenn Temperatur größer gleich ist dann
    digitalWrite(relais, HIGH);		// Relais an 
  }
  else{		// ansonsten
    digitalWrite(relais, LOW);		// Relais aus
  }
}
