
#include <iostream>
#include <stdio.h>

int main(void) {

  setlocale(NULL, "ru");

  long n;//число ряда

  double suma = 0; //сумма

  const double s = 0.000001; //предел точности

  double an; // сделать n с плавающей точкой

  double n1, n3; // для уровнения
  n1 = 1; // -1^n

  for (n = 0; ; n++, n1 *= -1) {

    n3 = pow(n, 3); // подносим в степень
    an = n1 * ((n + 1) / (n3 + 1)); // уровнение 

    if (fabs(an) >= s) { // если условие выполняеться то увеличиваем сумму

      suma += an;
    }
    else break; //если условие выше не выполняеться цикл завершаеться 

    if (n == 9) {

      printf("Сумма 10 членов ряда = %.10lf \n", suma);

    }

  }

  printf("Полная сумма ряда = %.10lf \n", suma);

  return 0;
}