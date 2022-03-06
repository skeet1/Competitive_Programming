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
	int n; cin >> n;
	vi t(n);
	REP(i, 0, n)
		cin >> t[i];
	sort(t.B, t.E);
	int ans = 1;
	REP(i, 1, n)
		if (t[i] != t[i - 1])
			ans++;
	cout << ans << nl;
}

signed main()
{
    int t;
	t = 1;
    while(t--)
    {
        solve();
    }
}
