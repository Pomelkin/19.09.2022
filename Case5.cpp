#include <iostream>

using namespace std;

int main()
{
	float a, b;
	int n;
	cin >> n;
	cin >> a >> b;
	if (b != 0)
	{
		switch (n)
		{
		case 1: cout << a + b; break;
		case 2: cout << a - b; break;
		case 3: cout << a * b; break;
		case 4: cout << b / a ; break;
		}
	}
	else
	{
		cout<<"B не может равняться нулю"
	}
	return 0;
}