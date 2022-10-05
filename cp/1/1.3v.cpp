#include <iostream>

using namespace std;

int main()
{
    float a, b;

    cout << "Введите первое число\n";
    cin >> a;
    cout << "Введите второе число\n";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Первое число = " << a << endl;
    cout << "Второе число = " << b << endl;

    return 0;
}