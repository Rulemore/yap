#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  cout << "Программа для опрределения простого числа\n";
  cout << "-----------------------------------------\n";
  int n, s = 0, i = 2;
  cout << "Введите натуральное число (>=2) > ";
  cin >> n;
  if (n == 1) {
    cout << "Число 1 не простое и не составное!\n";
  } else {
  }
  while (i <= sqrt(n)) {
    if ((n % i) == 0) {
      s++;
    }
    cout << "Итерация № " << i - 1 << endl;
    i++;
    if (s == 0) {
      cout << "Число простое!\n";
    } else {
      cout << "Число составное!\n";
    }
  }
  return 0;
}