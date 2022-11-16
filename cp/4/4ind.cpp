#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  char a;
  int I = 0, t = 0, n = 200;
  char mas[n];
  cout << "Введите строку > ";
  cin.getline(mas, n, '\n');
  cout << "Введите символ a > ";
  cin >> a;

  while (I == 0) {
    if (t < n) {
      if (mas[t] == a && mas[t + 1] == a) {
        I = t + 1;
      }
    } else {
      break;
    }
    t++;
  }
  cout << I << endl;
  return 0;
}