#include <cmath>
#include <iostream>

using namespace std;

bool squared(int n);
bool summed(int n);

int main() {
  int n;
  cout << "Программа поиска чисел от 1 до n, являющихся суммой квадратов двух "
          "натуральных чисел"
       << endl;

  cout << "Введите n (n>1): ";
  cin >> n;
  cout << "Числа являющиеся суммой квадратов двух чисел: ";
  for (int i = 1; i <= n; i++) {
    if (summed(i)) {
      cout << i << " ";
    }
  }

  return 0;
}
//Проверка является ли число суммой квадратов
bool summed(int n) {
  for (int i = 1; i <= n / 2; i++) {
    if (squared(i) && squared(n - i)) {
      return true;
    }
  }
  return false;
}

//Проверка является ли число полным квадратом
bool squared(int n) {
  if (pow((int)sqrt(n), 2) == n) {
    return true;
  }
  return false;
}