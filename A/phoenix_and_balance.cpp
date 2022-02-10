#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a = 0, b = 0;
		int n; cin >> n;
		for (int i = 1; i < n; i++)
		{
			if (i < n / 2)
				a += pow(2, i);
			else
				b += pow(2, i);
		}
		a += pow(2, n);
		cout << abs(a - b) << endl;
	}
}
