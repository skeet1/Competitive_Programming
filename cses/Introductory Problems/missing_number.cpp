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
#define L length()

void	solve()
{
	int n; cin >> n;
	vi t(n);
	t[0] = 0;
	for(int i = 1; i < n; i++)
		cin >> t[i];
	sort(t.B, t.E);
	if (t[n - 1] != n)
	{
		cout << n << nl;
		return ;
	}
	for (int i = 1; i < n; i++)
	{
		if (t[i] - t[i - 1] > 1)
		{
			cout << t[i] - 1 << nl;
			return ;
		}
	}
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
