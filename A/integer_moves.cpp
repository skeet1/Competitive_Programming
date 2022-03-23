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
	float x, y; cin >> x >> y;
	if (x == 0 && y == 0)
	{
		cout << 0 << nl;
		return ;
	}
	int res = sqrt(x * x + y * y) / 1;
	if (res == sqrt(x * x + y * y))
		cout << '1' << nl;
	else
		cout << '2' <<nl;
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
