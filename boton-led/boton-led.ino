/*
 * Encender un led y leer un boton
 * Por: Hugo Vargas
 * Fecha: 18 de abril de 2022 30.2°C
 * 
 * Este programa prende un led cuando se presioma un boton
 */

// Bibliotecas

// Constantes
const int BOTON = 4;
const int LED = 2;

// Variables
int dato;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  pinMode (BOTON, INPUT_PULLUP);//Configurar el pin del boton como entrada //INPUT, OUTPUT
  pinMode (LED, OUTPUT); // Configurar el pin del led como salida de voltaje
  digitalWrite (LED, LOW);// Empieza con el led Apagado //1, true, HIGH, 0, false, LOW
}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  dato = digitalRead (BOTON); //Leer el pin del boton
  digitalWrite (LED, dato); //Prender o apagar el led

}// Fin de void loop

// Funciones del usuario
