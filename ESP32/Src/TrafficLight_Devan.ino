const byte RED_LED = 4;
const byte YELLOW_LED = 2;
const byte GREEN_LED = 15;

byte RED_COUNT, YELLOW_COUNT, GREEN_COUNT;

void setup() {
  Serial.begin(115200);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  RED(); YELLOW(); GREEN();
}

void RED(){
  while(RED_COUNT--) {
    if(RED_COUNT <= 25 && RED_COUNT > 0) {
      digitalWrite(RED_LED, HIGH);
      Serial.println("Menghitung Mundur [Lampu Merah]: "+String(RED_COUNT)+" detik");
      delay(1000);
    }
    if(RED_COUNT == 0) {
      digitalWrite(RED_LED, LOW);
      Serial.println("Menghitung Mundur [Lampu Merah]: "+String(RED_COUNT)+" detik");
      delay(500);
      Serial.println("------------------------------------------------> Lampu Merah Mati\n");
      delay(2000);
    }
  }
}

void YELLOW(){
  while(YELLOW_COUNT--) {
    if(YELLOW_COUNT <= 3 && YELLOW_COUNT > 0) {
      digitalWrite(YELLOW_LED, HIGH);
      Serial.println("Menghitung Mundur [Lampu Kuning]: "+String(YELLOW_COUNT)+" detik");
      delay(1000);
    }
    if(YELLOW_COUNT == 0) {
      digitalWrite(YELLOW_LED, LOW);
      Serial.println("Menghitung Mundur [Lampu Kuning]: "+String(YELLOW_COUNT)+" detik");
      delay(500);
      Serial.println("------------------------------------------------> Lampu Kuning Mati\n");
      delay(2000);
    }
  }
}

void GREEN(){
  while(GREEN_COUNT--) {
    if(GREEN_COUNT <= 15 && GREEN_COUNT > 0) {
      digitalWrite(GREEN_LED, HIGH);
      Serial.println("Menghitung Mundur [Lampu Hijau]: "+String(GREEN_COUNT)+" detik");
      delay(1000);
    }
    if(GREEN_COUNT == 0) {
      digitalWrite(GREEN_LED, LOW);
      Serial.println("Menghitung Mundur [Lampu Hijau]: "+String(GREEN_COUNT)+" detik");
      delay(500);
      Serial.println("------------------------------------------------> Lampu Hijau Mati\n");
      delay(2000);
    }    
  }
}

/* Tugas Nusabot - Kelas Framework Arduino: Traffic Light by Devan Cakra M.W. */
