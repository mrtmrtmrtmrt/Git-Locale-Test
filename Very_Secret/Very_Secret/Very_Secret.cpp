// Very_Secret.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define a 5
using namespace std;

void Loop_For_2_nums(int x)
{
	int b = a;
	for (b; b < x; b++)

	{
		if (b < 15)
		{
			cout << b << "< 15" << endl;
			b = b * 2;
		}
		else
		{
			cout << b << "> 15" << endl;
			b = b / 3;
		}
	}
}

int main()
{
	int c = 4;
	int x;
	cin >> x;
	if (x == 20)
	{
		cout << 10 / x << endl;
	}
	while (c < x)
	{
		cout << x << " всё ещё меньше чем " << a << endl;
		c++;
	}
	cout << x << " больше чем " << a << endl;

	Loop_For_2_nums(25);
	
}