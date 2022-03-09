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
	int k, r; cin >> k >> r;
	int res = 0;
	int i = 0;
	while (++i)
		if (k * i % 10 == 0 || (k * i - r) % 10 == 0)
			break;
	cout << i << nl;
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
