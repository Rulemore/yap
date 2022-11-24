#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fIn("6.3input.txt");
  ofstream fOut("6.3output.txt");
  const int N = 1000000;
  bool *array = new bool[N * 2];
  int x;
  while (!fIn.eof()) {
    fIn >> x;
    array[x] = 1;
  }
  fIn.close();
  for (int i = 0; i < N; i++) {
    if (array[i] == 1) {
      fOut << i << endl;
    }
  }
  fOut.close();
  return 0;
}