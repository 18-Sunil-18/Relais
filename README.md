# Relais
Ein Relais mit Arduino verwenden


Beim Basteln mit Arduino sind Relais sehr wichtig. Relais sind Schalter, die einen größeren Strom fließen lassen können, als es vom Mikrocontroller aus möglich wäre. Mit dem Arduino aktiviert man nun also nur noch über einen ganz kleinen Strom das Relais, welches dann auch größere elektrische Geräte betreiben kann.

Hinweis : Ich raten von der Verwendung des Relais zur Schaltung von Haushaltsgeräten ab. (Ein kleiner Spruch: 220V "Macht klein schwarz und hässlich")

Material: Arduino Mikrocontrollerboard, ein Relais, Jumperkabel

An den Kontakten (auf dem Foto am rechten Bildrand, zwischen der roten und der grünen LED) wird die Relaiskarte mit dem Arduino verbunden. Die Karte ist im Betrieb dauerhaft mit 5V+ und GND (-) verbunden. Der Pin mit der Aufschrift „IN“ wird mit einem digitalen Pin des Arduinoboards verbunden. Solange an dem Pin „IN“ kein Signal anliegt (ausgegeben vom digitalen Pin des Arduino) sind die Schraubkontakte A und B miteinander verbunden. Sobald ein Signal anliegt, werden die Kontakte B und C miteinander verbunden.

ACHTUNG: Es gibt Relaiskarten die schalten, wenn an dem Pin „IN“ GND angelegt wird und es gibt Relaiskarten die schalten, wenn an dem Pin „IN“ eine Spannung von 5V+ angelegt wird . Welche Version man hat lässt sich leicht feststellen, indem man den „Signal-„Pin einmal mit GND und einmal mit 5V+ des Arduino Boards verbindet. Das Schalten der Relaiskarte ist durch ein lautes knacken deutlich zu erkennen.

An den unten Kontakten (A, B, C) kann ein elektrisches Gerät angeschlossen werden, bei dem ein höherer elektrischer Strom fließt, als es der Arduino liefern könnte. Zum Beispiel einen großen Elektromotor, eine große Lampe usw.

Als Beispielcode kann in diesem Fall der einfache „Blink-“ Code verwendet werden. Anstelle der LED schließt man den Ausgabepin des Arduinoboards an den „Signal-„Pin der Relaiskarte an. Das Relais wird dann im Sekundentakt schalten.

Weitere Infos unter: https://funduino.de/
