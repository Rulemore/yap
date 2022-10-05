#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  cout << "Программа вычисления факториала целого неотрицательного числа\n";
  cout << "-------------------------------------------------------------\n";
  int n;
  double factorial = 1;
  cout << "Введите целое неотрицательное число > ";
  cin >> n;
  for (int i = 2; i <= n; i++) {
    factorial = factorial * i;

  }
  cout <<"Ответ: "<< n<<"! = "<<factorial<<endl;
  return 0;
}