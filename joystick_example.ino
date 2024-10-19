

int X_PIN = A0;        // analog pin for X Values
int Y_PIN = A1;        // analog pin for Y Values
int BUTTON_PIN = 8;    // digital pin for button


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(X_PIN, INPUT);
  pinMode(Y_PIN, INPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // button needs pullup resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  int button;
  int raw_x, raw_y;
  char buff[4];

  raw_x = analogRead(X_PIN);         // get joystick X Value
  raw_y = analogRead(Y_PIN);         // get joystick Y Value
  button = digitalRead(BUTTON_PIN);  // get joystick Button Value

  Serial.print("    X: ");           // print formatted X Value
  sprintf(buff, "%4d", raw_x);       // 
  Serial.print(buff);                //

  Serial.print("    Y: ");           // print formatted Y Value
  sprintf(buff, "%4d", raw_y);       // 
  Serial.print(buff);                //

  Serial.print("    X: ");           // print Button Value
  Serial.println(button);            //

  delay(20);                         // wait 20ms until next reading
}
