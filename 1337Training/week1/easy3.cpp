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
	int n; cin >> n;
	vi t(n);
	vi odd;
	vi even;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (t[i] % 2)
			odd.push_back(t[i]);
		else
			even.push_back(t[i]);
	}
	if (is_sorted(odd.B, odd.E) && is_sorted(even.B, even.E))
		cout << "Yes" << nl;
	else
		cout << "No" << nl;
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
