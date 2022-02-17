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
		ll n; cin >> n;
		vector<ll>t(n);
		ll mx = 0, ind = 1, ans, n1 = 0, n2 = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> t[i];
			if (i > 0)
				if (t[i] * t[i - 1] > mx)
					mx = t[i] * t[i - 1];
		}
		sort(t.begin(), t.end());
		if (t[n - 1] * t[0] > mx)
			cout << t[n - 1] * t[0] << endl;
		else
			cout << mx << endl;
	}
}
