#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n, k; cin >> n >> k;
		int odd = 1, even = 2;
		if (n % 2 == 1 && k > 1)
		{
			cout << "NO" << endl;
			goto a;
		}
		else
		{
			cout << "YES" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < k; j++)
				{
					if (i % 2 == 0)
					{
						cout << odd << ((j == k - 1)? "" : " ");
						odd += 2;
					}
					else
					{
						cout << even << ((j == k - 1)? "" : " ");
						even += 2;
					}
				}
				cout << endl;
			}
		}
	}
}
