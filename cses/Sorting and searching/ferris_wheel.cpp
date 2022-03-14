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
#define rep(i,a,b) for (int i = a; i < b; i++)
#define L length()

void	solve()
{
	int n, x;
	cin >> n >> x;
	vi t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	sort(t.B, t.E);
	int sum = 0;
	int res = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (sum + t[i] <= x)
		{
			sum += t[i];
			if (sum + t[i + 1] > x)
			{
				sum = 0;
				res++;
			}
		}
	}
	cout << res << nl;
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
