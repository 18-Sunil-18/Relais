void setup(){
pinMode(6, OUTPUT);
}

void loop(){

digitalWrite(6, HIGH); //An dieser Stelle würde das Relais einsschalten

delay(1000);//...eine Sekunde warten

digitalWrite(6, LOW); //Und wieder ausschalten

delay(1000); //...und eine Sekunde warten.

}
