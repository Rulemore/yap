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

  while (i <= sqrt(n)) {
    if ((n % i) == 0) {
      s++;
    }
    i++;
    if (s == 0) {
      cout << "Число простое!\n";
    } else {
      cout << "Число составное!\n";
      break;
    }

    return 0;
  }
}