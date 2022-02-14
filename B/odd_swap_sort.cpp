#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>t(n);
		for (ll i = 0; i < n; i++)
			cin >> t[i];
		ll j = 1;
		while (j)
		{
			j = 0;
			for (ll i = 0; i < n - 1; i++)
			{
				if (t[i] > t[i + 1] && (t[i] + t[i + 1]) % 2 == 1)
				{
					ll temp = t[i];
					t[i] = t[i + 1];
					t[i + 1] = temp;
					j++;
				}
			}
		}
		if (is_sorted(t.begin(), t.end()))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
