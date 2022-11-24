#include <bitset>
#include <iostream>

using namespace std;

int main() {
  unsigned int x = 128;
  unsigned int mask = 0x01;
  cout << "Изначальное число : " << x << endl;
  x = x | (mask << 6);
  cout << "Преобразованное число : " << x << endl;
}