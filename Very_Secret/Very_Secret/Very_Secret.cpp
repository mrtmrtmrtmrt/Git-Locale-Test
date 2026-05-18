// Very_Secret.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int x;
	int a = 10;
	cin >> x;
	if (x == 0)
	{
		cout << 10 / x << endl;
	}
	while (x < a)
	{
		cout << x << " всё ещё меньше чем " << a << endl;
		x++;
	}
	cout << x << " больше чем " << a << endl;


}

