#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream fIn;
  ofstream fOut;
  int x, count = 0;
  fIn.open("input.txt");
  fOut.open("output.txt");
  if (fIn) {
    while (fIn >> x) {
      fOut << x * 2 << endl;
    }
    fIn.close();
    fOut.close();
    cout << "Данные сохранены в файле 'output.txt' ." << endl;
  } else {
    cout << "Не удалось открыть файл 'input.txt' ." << endl;
  }
  return 0;
}