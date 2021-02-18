#include <iostream>
#include <ctime> // для рандомайзера
#define S 9 //размер массива

int main(void) {

  srand(time(NULL)); // что бы рандомайзер работал
  int Arr[S][S];// массив основной
  int Arr2[S][S];// массив 2


   //заполняем и выводим массив
  for (int i = 0; i < S; i++) {
    for (int j = 0; j < S; j++) {
      Arr[i][j] = rand() % -98;
      printf("%3d", Arr[i][j]);
    }

    printf("\n");
  }
  // делаем переворот массива в бок путём записи в новый массив
  for (int i = 0; i < S; i++) {
    for (int j = 0; j < S; j++) {
      Arr2[S - j - 1][i] = Arr[i][j];
    }
  }
  // делаем одзеркаливание массива повёрнутого
  for (int i = 0; i < S / 2; i++) {
    for (int j = 0; j < S; j++) {
      Arr2[S - i - 1][j] = Arr2[i][j];
    }
  }

  // переворичиваем массив назад
  for (int i = 0; i < S; i++) {
    for (int j = 0; j < S; j++) {
      Arr[j][S - i - 1] = Arr2[i][j];
    }
  }


  printf("\n");

  // делаем вывод массива
  for (int i = 0; i < S; i++) {
    for (int j = 0; j < S; j++) {
      printf("%3d", Arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}