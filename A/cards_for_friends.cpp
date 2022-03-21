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
	int w, h, n; cin >> w >> h >> n;
	if (w % 2 && h % 2)
		if (n > 1)
		{
			cout << "NO" << nl;
			return ;
		}
	int p = 1;
	while (w && h)
	{
		if (w % 2 == 0)
		{
			w /= 2;
			p *= 2;
		}
		else if (h % 2 == 0)
		{
			h /= 2;
			p *= 2;
		}
		else
			break;
	}
	if (p >= n)
		cout << "YES" << nl;
	else
		cout << "NO" << nl;

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
