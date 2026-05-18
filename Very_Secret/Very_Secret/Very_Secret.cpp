// Very_Secret.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
	int x = 24;
	int arr[4] = { 2, 3, 4, 5 };
	for (int a = 0; a < x; a++)
	{
		cout << a * x << endl;
		if (a < 4)
		{
			cout << arr[a] << endl;
		}
	}


}