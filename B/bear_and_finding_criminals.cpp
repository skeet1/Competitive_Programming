#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;
int main()
{
	ll n, a; cin>> n >> a;
	vector<ll>t(n);
	for (ll i = 0; i < n; i++)
		cin >> t[i];
	ll ans = 0, s = 0, end = 0;
	if (a * 2 < n)
		end = 2 * (n - a) + 1;
	else
	{
		s = 2 * a - 1;
		end = n;
	}
	while (s < end)
	{
		if (t[s])
			ans++;
		s++;
	}
	if (n == 1)
		ans = 0;
	int add = 1;
	for (ll i = 0; i < a; i++)
	{
		if (t[a - 1 - i] && t[a - 1 + i])
			ans += add;
		add = 2;
	}
	cout << ans << endl;
}
