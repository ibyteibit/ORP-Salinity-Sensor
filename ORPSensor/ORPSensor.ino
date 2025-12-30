const int BLUE = 8;
const int GREEN = 9;
const int RED = 10;
float Voltage;
float Conc;

float BUP = 5000;
float BLOW = 3061;

float GUP = 3060;
float GLOW = 1441;

float RUP = 1440;
float RLOW = 0;

float sum = 0;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);  
}

void loop() {
  count++;
  if (count<=10){
    sum += analogRead(A0);
  }
  else {
    sum = sum/10.0;
    count = 0;
    Voltage = 5*(sum/1023.0);
    Conc = (-1908.25*Voltage) + 6629.85;
    if (Conc < 0) {
      Conc = 0;
    }
    sum = 0;

    if (Conc >= BLOW && Conc <= BUP) {
      digitalWrite(BLUE, HIGH);
      digitalWrite(GREEN, LOW);
      digitalWrite(RED, LOW);
    }

    else if (Conc >= GLOW && Conc <= GUP) {
      digitalWrite(GREEN, HIGH);
      digitalWrite(BLUE, LOW);
      digitalWrite(RED, LOW);
    }

    else if (Conc >= RLOW && Conc <= RUP) {
      digitalWrite(RED, HIGH);
      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, LOW);
    }

    else {
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, LOW);
    }

    Serial.print("Voltage (V): ");
    Serial.println(Voltage, 5);
    Serial.print("Concentration (ppm): ");
    Serial.println(Conc, 3);
    Serial.println("---");
  
  }

  delay(80);
}