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
	vi a(n);
	vi b(n);
	vi aa(n);
	vi bb(n);
	int cost1 = 0, cost2 = 0, cost3 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		aa[i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		bb[i] = b[i];
	}
	sort(aa.B, aa.E);
	sort(bb.B, bb.E);
	cost1 = a[0] * (b[n - 1] + b[0]) + a[n - 1] * (b[n - 1] * b[0]);
	cost2 = aa[0] * (b[0] + b[n - 1]) + bb[0] * (a[1] + a[n - 2]);
	cost3 = abs(a[0] - b[0]) + abs(a[n - 1] + b[n - 1]);
	cout << min(cost1, cost2) << nl;
}

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
