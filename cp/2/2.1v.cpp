#include <iostream>

using namespace std;

int main()
{

    int x;
    cout << "Введите год\n";
    cin >> x;
    if (x % 4 > 0)
    {
        cout << "Год невисокосный\n";
    }
    else
    {
        cout << "Год високосный\n";
    }
    return 0;
}