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
	int n, b, d;
	cin >> n >> b >>d;
	vi t(n);
	int sum = 0;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (t[i] <= b)
			sum += t[i];
		if (sum > d)
		{
			sum = 0;
			res++;
		}
	}
	cout << res << nl;
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
