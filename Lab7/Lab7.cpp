#include <iostream>
#include <math.h>

int main(void) {

  setlocale(NULL, "ru");

  short n, h;
  double x, y;

  printf("|   x   |      y     |\n");
  printf("|-------|------------|\n");

  for (n = 0; n < 5; n++) {


    for (x = 0; x < 4; x += 0.25) {

      if (x < 1) {
        y = 2; // уравнение горизонтальной прямой

      }
      else if (x <= 3) {

        y = -sqrt(1 - (x-2)*(x-2));// уравнение круга

      }
      else if (x > 3){
        y = x - 3;  // уравнение прямой

      }

      printf("| %5.2lf | %10.7lf |", x + (n * 4), y); // вывод кординат

      h = (y+1) * 9;
      for (; h > 0; h--) { printf(" "); } // оступы что бы потом поставить точку (звёздочку)
      printf("*\n"); //ставим звезду

    }

    printf("Нажмите Enter....");

    getchar(); // поставить цикл на паузу

  }

  return 0;
}