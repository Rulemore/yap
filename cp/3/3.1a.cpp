#include <iostream>

using namespace std;

int main() {
  const int n = 11;
  int a[n];
  for (int i = 0; i < n; i++) {
    cout << "Введите " << i << " элемент целочисленного массива > ";
    cin >> a[i];
  }
  cout << "Целочисленнный массив a:\n";
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "]=" << a[i] << endl;
  }
  return 0;
}