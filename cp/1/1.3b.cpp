#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Введите первое число\n";
    cin >> a;
    cout << "Введите второе число\n";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "Первое число = " << a << endl;
    cout << "Второе число = " << b << endl;

    return 0;
}