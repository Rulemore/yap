#include <iostream>

using namespace std;

int main()
{
    float a, b, c, max;
    cout << "Ведите число a\n";
    cin >> a;
    cout << "Ведите число b\n";
    cin >> b;
    cout << "Ведите число c\n";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            max = c;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    cout << "Максимальное число = " << max << endl;
    return 0;
}