#include <cmath>
#include <iostream>
using namespace std;

struct Pair {
  float first;
  float second;
  void init(float f, float s) {
    first = f;
    second = s;
    if (first == 0) {
      cout << "Недопустимое первое число" << endl;
      exit(1);
    }
  }
  void read() { cin >> first >> second; }
  void display() { cout << first << " " << second << endl; }
  void power() { first = pow(first, second); };
};

Pair make_pair(float a, float b) {
  Pair p;
  p.init(a, b);
  return p;
}

int main() {
  float a, b;
  cout << "Введите два числа: " << endl;
  cin >> a >> b;
  Pair p = make_pair(a, b);
  p.power();
  p.display();
  return 0;
}