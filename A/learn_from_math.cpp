#include <iostream>

using namespace std;
int main()
{
	int n; cin >> n;
	int a = 3, b = 4;
	s:for (int i = 2; i < a; i++)
		if (++a % i == 0)
			break;
	b = n - a;
	int f = 0;
	for (int j = 2; j < b; j++)
		if (b % j == 0)
			f = 1;
	if (f == 1)
		cout << a << " " << b << endl;
	else
	{
		a++;
		goto s;
	}
}
