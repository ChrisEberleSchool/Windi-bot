#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // Start the serial connection
  Serial.begin(115200);
  delay(1000); 

  Serial.println("Hello, World!"); 

  int result = myFunction(2, 3);
  Serial.print("Result of myFunction(2, 3): ");
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly: ..... test test
}

// put function definitions here: example
int myFunction(int x, int y) {
  return x + y;
}
