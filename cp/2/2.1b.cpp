#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Введите число\n";
    cin >> x;
    if (abs(x) % 2)
    {
        cout << "Число нечетное\n";
    }
    else
    {
        cout << "Число четное\n";
    }
    return 0;
}