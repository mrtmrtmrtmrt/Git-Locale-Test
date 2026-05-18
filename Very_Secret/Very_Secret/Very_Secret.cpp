// Very_Secret.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define a 10
using namespace std;

void Loop_For_2_nums(int x)
{
    int b = a;
    for (b = 0; b < x * 2; b++)
    {
        if (b % 2 == 0)
        {
            cout << b << " - even" << endl;
        }
        else
        {
            cout << b << " - odd" << endl;
            b = b + 1;
        }
    }
}

int main()
{
    int c = 0;
    int x;
    cin >> x;
    if (x == 10)
    {
        cout << "x equals 10" << endl;
    }
    while (c <= x)
    {
        cout << x << " is still less than " << a * 2 << endl;
        c++;
    }
    cout << x << " is greater or equal than " << a << endl;

    Loop_For_2_nums(30);
}