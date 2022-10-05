#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
  cout << "Программа демонстрации работы цикла while" << endl;
  cout << "----------------------------------------" << endl;
  short int d = 25;
  while (d >= -25) {
    cout << d << ' ';
    d = d - 5;
  }
  return 0;
}