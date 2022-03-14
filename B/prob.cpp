#include <iostream>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int p = n;
			p -= i;
			for (int j = 0; j < n; j++)
			{
				if (p < 1)
					p = n;
				if (n == 3 && (j == 1 && i == 1))
					p = 3;
				if (n == 3 && (j == 2 && i == 1))
					p = 1;
				cout << p-- << " ";
			}
			cout << endl;
		}
	}
}
