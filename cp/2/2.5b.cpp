#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
  cout << "Программа демонстрации работы цикла for" << endl;
  cout << "----------------------------------------" << endl;
  for (int i = -25; i <= 25; i += 5) {
    cout << i << ' ';
  }
  return 0;
}