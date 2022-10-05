#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    
    float a, b, c, p, r, R;
    cout << "Программа вычисления радиуса вписанной и описанной окружностей\n";
    cout << "----------------------------------------------------------------\n";
    cout << "Введите сторону a\n";
    cin >> a;
    cout << "Введите сторону b\n";
    cin >> b;
    cout << "Введите сторону c\n";
    cin >> c;

    p = (a + b + c) / 2;

    R = (a * b * c) / (4 * sqrt(p * (p - a) * (p - c) * (p - b)));
    r = sqrt(((p - a) * (p - b) * (p - c) / p));

    cout << "----------------------------------------------------------------\n";
    cout << "Радиус описанной окружности = " << setprecision(3) << R << endl;
    cout << "Радиус вписанной окружности = " << setprecision(3) << r << endl;

    return 0;
}