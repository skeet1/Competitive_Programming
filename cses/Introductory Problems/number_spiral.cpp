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
	int x, y; cin >> x >> y;
	if (x > y)
	{
		if (x % 2)
			cout << (x - 1) * (x - 1) + y << nl;
		else
			cout << x * x - y + 1 << nl;
	}
	else
	{
		if (y % 2)
			cout << y * y - x + 1 << nl;
		else
			cout << (y - 1) * (y - 1) + x << nl;
	}
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
