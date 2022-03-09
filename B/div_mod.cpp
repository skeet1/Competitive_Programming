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
	int l, r, a; cin >> l >> r >> a;
	int sr = r;
	if (r % a == a - 1)
	{
		cout << r / a  + r % a << nl;
		return ;
	}
	r -= r % a + 1;
	if (r < l)
		cout << sr / a + sr % a << nl;
	else
		cout << r / a + r % a << nl;
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
