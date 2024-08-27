// Declarando os pinos
const int PINO_POT_R = A1;  // Potenciometro do LED vermelho
const int PINO_LED_R = 11;  // Pino do LED vermelho
const int PINO_POT_G = A2;  // Potenciometro do LED verde
const int PINO_LED_G = 10;  // Pino do LED verde
const int PINO_POT_B = A3;  // Potenciometro do LED azul
const int PINO_LED_B = 9;   // Pino do LED azul

int valor_pot = 0;      // Valor de leitura do potenciometro
int valor_LED_RGB = 0;  // Valor dos LEDs RGB

void setup() {
  // Configurando os pinos para cada saida
  pinMode(PINO_POT_R, INPUT);   // Pino do potenciometro para LED vermelho
  pinMode(PINO_POT_G, INPUT);   // Pino do potenciometro para LED verde
  pinMode(PINO_POT_B, INPUT);   // Pino do potenciometro para LED azul
  pinMode(PINO_LED_R, OUTPUT);  // LED vermelho
  pinMode(PINO_LED_G, OUTPUT);  // LED verde
  pinMode(PINO_LED_B, OUTPUT);  // LED azul
}

void loop() {
  // Controle do LED vermelho
  valor_pot = analogRead(PINO_POT_R);               // Lendo o valor do potenciometro
  valor_LED_RGB = map(valor_pot, 0, 1023, 0, 255);  // Convertendo o valor
  analogWrite(PINO_LED_R, valor_LED_RGB);           // Alterando o valor do PWM

  // Controle do LED verde
  valor_pot = analogRead(PINO_POT_G);               // Informando valor pino para verde
  valor_LED_RGB = map(valor_pot, 0, 1023, 0, 255);  // Informando valor para o potenciometro
  analogWrite(PINO_LED_G, valor_LED_RGB);           // Mudando o valor para analogico

  // Controle do LED azul
  valor_pot = analogRead(PINO_POT_B);               // Informando valor pino para azul
  valor_LED_RGB = map(valor_pot, 0, 1023, 0, 255);  // Informando valor para o potenciometro
  analogWrite(PINO_LED_B, valor_LED_RGB);           // Mudando o valor para analogico
}