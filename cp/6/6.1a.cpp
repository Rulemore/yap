#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream fIn("fio.txt");
  ofstream fOut("fio.txt");
  string sIn;
  string sOut;
  cout << "Ведите ФИО: ";
  getline(cin, sOut);
  fOut << sOut;
  fOut.close();
  getline(fIn, sIn);
  cout << "Ваше ФИО: ";
  cout << sIn << endl;
  fIn.close();
  return 0;
}