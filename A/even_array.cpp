#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int t;
	cin >> t;
	a:	while (t--)
	{
		int n; cin >> n;
		vector<int>t(n);
		int odd = 0, even = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> t[i];
			if (t[i] % 2 == 0)
				even++;
			else
				odd++;
		}
		if (n % 2 == 0)
		{
			if (even != odd)
			{
				cout << -1 << endl;
				goto a;
			}
		}
		else
		{
			if (even - 1 != odd)
			{
				cout << -1 << endl;
				goto a;
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i += 2)
			if (t[i] % 2 == 1)
				ans++;
		cout << ans << endl;
	}
}
