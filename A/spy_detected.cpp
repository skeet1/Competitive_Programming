#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void	solve()
{
	int n; cin >> n;
	vector<int>t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	if (t[0] != t[1] && t[0] != t[n - 1])
		cout << 1 << endl;
	else if (t[n - 1] != t[n - 2] && t[n - 1] != t[0])
		cout << n << endl;
	else
	{
		for (int i = 1; i < n - 1; i++)
		{
			if (t[i] != t[i - 1] && t[i] != t[i + 1])
				cout << i + 1 << endl;
		}
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
		solve();
}
