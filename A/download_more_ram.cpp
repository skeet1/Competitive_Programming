#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
int main()
{
	ll	t; cin >> t;
	while (t--)
	{
		ll n, k; cin >> n >> k;
		ll res;
		vector<ll>tab(n);
		vector<ll>inc(n);
		for (ll i = 0; i < n; i++)
			cin >> tab[i];
		for (ll i = 0; i < n; i++)
			cin >> inc[i];
		res = k;
		for (ll i = 0; i < n; i++)
		{
			if (res >= tab[i])
			{
				tab[i] = 1000000000;
				res += inc[i];
				i = -1;
			}
		}
		cout << res << endl;
	}
}
