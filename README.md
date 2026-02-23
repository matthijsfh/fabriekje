# Fabriekje met bewegende forkheftruck
Arduino Nano code om vorkheftruck heen en weer te laten rijden.
De vorheftruck brengt en haalt een pallet.

![Fabriekje](images/s20260223_220045.jpg)

## Arduino IDE bouwen
Dit project is gemaakt voor Platform.io, maar is ook gewoon in de standaard Arduino IDE te bouwen.  
Dan moet de file "main.cpp" van naam gewijzigd worden in "main.ino".  
Deze "main.ino" naar een folder met de naam "main" kopieren en dan openen in de Arduino IDE is voldoende.  
Er worden geen speciale libraries gebruikt.

## Hardware
Arduino --> Nano V3.0 Avr Atmega328  
Stepper driver --> DRV8825  
Regelaar --> LM7805  
Transistor --> BD139 transistor  
Spindel --> Aliexpress diverse typen te koop. Let op moet 4 draads versie zijn. 

## Schema
Hieronder een "Fritzing" schema van de aansturing.

