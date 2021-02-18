 #include <iostream>
 #include <math.h>

int main(void) {

  setlocale(NULL, "ru");

  double t1, t2; // нужно найти
  int x, n1, n = 3; 
  double a = 3.14;
  double ax, b, tg2, a1, xn;

  printf("x >");
  scanf_s("%d", &x);

  // делаем упрощения для формул
  n1 = n - 1; // заранее отнимаем 
  b = pow(x, n1); // подносим в степень
  a1 = 1 / a; 
  ax = a * x * 3, 14 / 180; // сразу в градусы
  tg2 = tan(ax) * tan(ax);
  xn = pow(x, n);

  //делаем формулу с тех упрощений
  t1 = ((1 / (2 * n1 * b)) + (a / (2 * n * xn)));
  t2 = (2 * a1 * tg2) + (a1 * log(cos(ax))); 

  if (x == 0) { printf("При х = 0, t1 не существует, t2 = 0"); }
  if (x % 2 == 0) {
    printf("t1>%lf\n", t1);
    printf("t2>%lf", t2);
  }
  else {
    printf("t1>%lf\n", t1);
    printf("t2 не существует");
  }
  return 0;

}