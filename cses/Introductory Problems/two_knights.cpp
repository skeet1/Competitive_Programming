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
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			cout << 0 << nl;
		else if (i == 2)
			cout << 6 << nl;
		else
		{
			int a = i * i * (i * i - 1) / 2;
			int b = 2 * ((i - 1) * (i - 2) + (i - 2) * (i - 1));
			cout << a - b << nl;
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
