/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <set>
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
	/* Brute force method

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

	*/
	// try now to use set
	int n; cin >> n;
	set<int>s;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s.insert(a);
	}
	cout << s.Z << nl;

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
