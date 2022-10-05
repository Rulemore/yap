#include <iostream>

using namespace std;

int main() {
  int n, a;
  int positiveSum = 0, negativeSum = 0;
  cout << "Введите число n > ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Введите целое число a > ";
    cin >> a;
    if (a >= 0) {
      positiveSum += a;
    } else {
      negativeSum += a;
    }
  }
  cout << "Сумма отрицательных элементов последовательности = " << positiveSum
       << endl;
  cout << "Сумма положительных элементов последовательности = " << negativeSum
       << endl;
  return 0;
}