#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long n, x, y;
		cin >> n >> x >> y;
		vector<int>t(n);
		int odd_nb = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> t[i];
			if (t[i] % 2 == 1)
				odd_nb++;
		}
		if (odd_nb % 2 == 0)
			cout << ((x % 2 == y % 2) ? "Alice": "Bob") << endl;
		else
			cout << ((x % 2 == y % 2) ? "Bob" : "Alice") << endl;
	}
}
