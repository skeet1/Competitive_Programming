#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;
int main()
{
	ll t; cin >> t;
	while (t--)
	{
		ll n, k; cin >> n >> k;
		int mx = -1000000000;
		vector<ll>t(n);
		for (ll i = 0; i < n; i++)
		{
			cin >> t[i];
			ll op = 0;
			if (i > 0)
			{
				op = i * (i + 1) - k * (t[i] | t[i - 1]);
				if (op > mx)
					mx = op;
			}
		}
		/*
		sort(t.begin(), t.end());
		if ((n - k * (t[0] | t[n - 1])) > mx)
			cout << n - k * (t[0] | t[n - 1]) << endl;
		else
		*/
			cout << mx << endl;
	}
}
