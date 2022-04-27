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
	int	 n; cin >> n;
	if (n >= 1900)
		cout << "Division 1" << nl;
	else if (n >= 1600 && n <= 1899)
		cout << "Division 2" << nl;
	else if (n >= 1400 && n <= 1599)
		cout << "Division 3" << nl;
	else
		cout << "Division 4" << nl;
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
