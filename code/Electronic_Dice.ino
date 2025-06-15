// Pines para los segmentos del display
const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;
const int pinE = 6;
const int pinF = 7;
const int pinG = 8;

// Pines de control para cada display
const int display1Pin = 9;  // Control del primer display
const int display2Pin = 10; // Control del segundo display

// Pines de los botones
const int buttonDiceType = 11; // Botón para cambiar el tipo de dado
const int buttonRoll = 12;     // Botón para lanzar el dado

// Variables de estado
int diceType = 6; // Tipo de dado inicial: D6
int number = 1;   // Número generado
int displayValue = 6; // Valor a mostrar (tipo de dado o número generado)

// Mapeo de segmentos para cada dígito (0-9)
const byte digitSegments[10] = {
  0b0111111, // 0
  0b0000110, // 1
  0b1011011, // 2
  0b1001111, // 3
  0b1100110, // 4
  0b1101101, // 5
  0b1111101, // 6
  0b0000111, // 7
  0b1111111, // 8
  0b1101111  // 9
};

void setup() {
  // Configurar pines de segmentos como salidas
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  
  // Configurar pines de control de displays como salidas
  pinMode(display1Pin, OUTPUT);
  pinMode(display2Pin, OUTPUT);

  // Configurar pines de botones como entradas con resistencia pull-up interna
  pinMode(buttonDiceType, INPUT_PULLUP);
  pinMode(buttonRoll, INPUT_PULLUP);
}

void loop() {
  // Cambiar el tipo de dado si se presiona el botón correspondiente
  if (digitalRead(buttonDiceType) == LOW) {
    delay(200); // Debounce
    changeDiceType();
  }

  // Generar un número aleatorio si se presiona el botón de lanzar
  if (digitalRead(buttonRoll) == LOW) {
    delay(200); // Debounce
    rollDice();
  }

  // Multiplexado constante para mostrar el valor en ambos displays
  displayNumber(displayValue);
}

// Función para cambiar el tipo de dado y mostrarlo en los displays
void changeDiceType() {
  switch (diceType) {
    case 4: diceType = 6; displayValue = 6; break;
    case 6: diceType = 8; displayValue = 8; break;
    case 8: diceType = 10; displayValue = 10; break;
    case 10: diceType = 12; displayValue = 12; break;
    case 12: diceType = 20; displayValue = 20; break;
    case 20: diceType = 4; displayValue = 4; break;
  }
}

// Función para generar el número aleatorio y mostrarlo
void rollDice() {
  number = random(1, diceType + 1);
  displayValue = number;
}

// Función para mostrar el número en ambos displays con multiplexado continuo
void displayNumber(int num) {
  int tens = num / 10;  // Dígito de las decenas
  int units = num % 10; // Dígito de las unidades

  // Mostrar decenas en el primer display
  digitalWrite(display1Pin, HIGH);
  digitalWrite(display2Pin, LOW);
  setSegments(digitSegments[tens]);
  delay(40); // Breve retardo para multiplexación

  // Mostrar unidades en el segundo display
  digitalWrite(display1Pin, LOW);
  digitalWrite(display2Pin, HIGH);
  setSegments(digitSegments[units]);
  delay(40); // Breve retardo para multiplexación
}

// Función para encender los segmentos según el patrón dado
void setSegments(byte segments) {
  digitalWrite(pinA, segments & 0b0000001);
  digitalWrite(pinB, segments & 0b0000010);
  digitalWrite(pinC, segments & 0b0000100);
  digitalWrite(pinD, segments & 0b0001000);
  digitalWrite(pinE, segments & 0b0010000);
  digitalWrite(pinF, segments & 0b0100000);
  digitalWrite(pinG, segments & 0b1000000);
}
