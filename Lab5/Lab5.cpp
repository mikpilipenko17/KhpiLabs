#include <iostream>

using namespace std;

int main(void) {

  setlocale(NULL, "ru");

  double x, y;

  cout <<"Введите координату x >";
  cin >> x;

  cout << "Введите координату y >";
  cin >> y;

  if ((x * x + y * y <= 1) || ( x <= 1 && y <= 1 && x >= 0 && y >= 0)) {
    
    cout << "Точка попадает в область\n";
  }
  else {

    cout << "Точка не попадает в область\n";
  }

  return 0;
}