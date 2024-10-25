

int R_PIN = 2;  // digital pin for Red LED
int G_PIN = 3;  // digital pin for Green LED
int B_PIN = 4;  // digital pin for Blue LED

//      Color      R  G  B
#define RED        1, 0, 0
#define GREEN      0, 1, 0
#define BLUE       0, 0, 1
#define CYAN       0, 1, 1
#define YELLOW     1, 1, 0
#define MAGENTA    1, 0, 1
#define WHITE      1, 1, 1
#define BLACK      0, 0, 0


void light_leds(int r_value, int g_value, int b_value) {
  digitalWrite(R_PIN, r_value);
  digitalWrite(G_PIN, g_value);
  digitalWrite(B_PIN, b_value);
  delay(500);  // fixed delay of 0.5 seconds
}


void setup() {
  // put your setup code here, to run once:
  pinMode(R_PIN, OUTPUT);  // configure digital pins as output
  pinMode(G_PIN, OUTPUT);  //
  pinMode(B_PIN, OUTPUT);  //
}

void loop() {
  // put your main code here, to run repeatedly:
  light_leds(RED);
  light_leds(GREEN);
  light_leds(BLUE);
  light_leds(CYAN);
  light_leds(YELLOW);
  light_leds(MAGENTA);
  light_leds(WHITE);
  light_leds(BLACK);
}
