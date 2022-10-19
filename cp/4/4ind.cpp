#include <iostream>

using namespace std;

int main() {
  char a;
  int I = 0, t = 0, n;
  cout << "Введите значение n > ";
  cin >> n;
  char mas[n];
  for (int i = 0; i < n; i++) {
    cout << "Введите символ s " << i + 1 << " > ";
    cin >> mas[i];
  }
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