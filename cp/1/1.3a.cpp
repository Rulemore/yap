#include <iostream>

using namespace std;

int main()
{

    const float pi = 3.1415926;
    float R;

    cout << "Введите радиус окружности\n";
    cin >> R;
    cout << "Длина окружности радиуса " << R << " равна: " << 2 * pi * R << ".\n";

    return 0;
}