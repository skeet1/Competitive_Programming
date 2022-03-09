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
	int n, h;
	cin >> n >> h;
	int res = 0;
	vi t(n);
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (t[i] <= h)
			res++;
		else
			res += 2;
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
