#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const float pi = 3.1415926;
    cout << "Значение переменной Pi= ";
    cout <<fixed<< setprecision(2)<< pi;
    cout << "\n";

    int length(25);
    cout << "Значение целочисленной переменной " << length << "\n";

    return 0;
}