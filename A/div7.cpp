#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n; cin >> n;
		if (n % 7 == 0)
			cout << n << endl;
		else
		{
			int nb;
			nb = (n / 10) * 10;
			for (int i = 0; i <= 9; i++)
				if ((nb + i) % 7 == 0)
				{
					cout << nb + i << endl;
					goto a;
				}
			nb = (nb / 100) * 100  + (nb % 10);
			for (int i = 0; i <= 9; i++)
			{
				if ((nb + i * 10) % 7 == 0)
				{
					cout << nb + i * 10 << endl;
					goto a;
				}
			}
		}
	}
}
					
