#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  cout << "Программа для опрределения простого числа\n";
  cout << "-----------------------------------------\n";
  int n;
  do {
    int s = 0, i = 2;
    cout << "Введите натуральное число (>=2) (0 - выход) > ";
    cin >> n;
    while (i <= sqrt(n) && s == 0) {
      if (n % i == 0) {
        s++;
      }
      i++;
    }
    if (s == 0) {
      cout << "Число простое!" << endl;
    } else {
      cout << "Число составное!" << endl;
    }
  } while (n != 0);

  return 0;
}