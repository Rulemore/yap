#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  srand(time(NULL));
  ifstream fIn("rand25.txt");
  ofstream fOut("rand25.txt");
  string num;
  for (int i = 0; i < 25; i++) {
    fOut << rand() % 1000 << endl;
  }
  fOut.close();
  while (getline(fIn, num)) {
    cout << num << " ";
  }
  fIn.close();
}