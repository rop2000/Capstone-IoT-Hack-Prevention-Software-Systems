

#define GND_R 5
#define VCC_R 2
#define DATA_R 4


void setup() {
  // put your setup code here, to run once:
  pinMode(GND_R, OUTPUT);
  pinMode(VCC_R, OUTPUT);
  pinMode(DATA_R, INPUT);
  digitalWrite(GND_R, LOW);
  digitalWrite(VCC_R, HIGH);
  Serial.begin(115200);
Serial.println("CLEARDATA"); //clears up any data left from previous projects
Serial.println("LABEL,Time,Binary Data"); //always write LABEL, so excel knows the next things will be the names of the columns (instead of Acolumn you could write Time for instance)
Serial.println("RESETTIMER");
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("DATA,TIME,"); 
Serial.print(digitalRead(DATA_R));
Serial.println();
delay(100);
digitalWrite(13, HIGH);  
}
