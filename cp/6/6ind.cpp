#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

// double makeX(int i);

int main() {
  ofstream fOut("h.txt");
  double E, x;
  int i = 1;
  bool flag = true;
  cout << "Введите E (E>0): ";
  cin >> E;
  if (E > 0) {
    while (flag) {
      x = (i - 0.1) / (pow(i, 3) + abs(tan(2 * i)));
      if (abs(x) >= E) {
        fOut << x << endl;
        i++;
      } else {
        cout << "Члены последовательности записаны в файле h.txt" << endl;
        flag = false;
      }
    }
  } else {
    cout << "Введено неверное значение E";
  }
  fOut.close();
  return 0;
}