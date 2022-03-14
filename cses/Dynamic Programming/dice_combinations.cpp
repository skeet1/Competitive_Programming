/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>

using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
#define F first
#define nl '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()

void	solve()
{
	const ll mod = 1e9+7;
	ll n; cin >> n;
	vector<ll> t(n + 1);
	t[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 6; j++)
			if (i - j >= 0)
				t[i] = (t[i] + t[i - j]) % mod;
	cout << t[n] << nl;
}

signed main()
{
    int t;
//    cin >> t;
	t = 1;
    while(t--)
    {
        solve();
    }
}
