#include <includes_y_defines.h>

#define rs 12
#define en  11
#define d4  5
#define d5  4
#define d6  3
#define d7  2

LiquidCrystal jose(rs, en, d4, d5, d6, d7);
LiquidCrystal pepito(10, 11, 12, 13, 14, 15);



int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  jose.begin(16, 2);
  jose.print("Hello World!");
  pepito.begin(20, 4);
  pepito.print("Hola");


}

void loop() {
  a=10;
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}