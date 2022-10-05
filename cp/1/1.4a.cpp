#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Программа для вычисления расстояния между двумя точками\n";
    cout << "-------------------------\n";
    float xa, ya, xb, yb, AB;
    cout << "Введите координату X точки A > ";
    cin >> xa;
    cout << "Введите координату Y точки A > ";
    cin >> ya;
    cout << "Введите координату X точки B > ";
    cin >> xb;
    cout << "Введите координату Y точки B > ";
    cin >> yb;
    AB = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    cout << "-------------------------\n";
    cout.precision(4);
    cout<<"Расстояние между точками равно: "<<AB<<endl;

    return 0;
}