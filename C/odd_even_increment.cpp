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
	int	n; cin >> n;
	vi t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	int yes = 1;
	int odd = 0, even = 0;
	for (int i = 1; i < n; i += 2)
	{
		if (t[i] % 2)
			odd++;
		else
			even++;
	}
	if (odd && even)
	{
		cout << "NO" << nl;
		return ;
	}
	odd = 0;even = 0;
	for (int i = 0; i < n; i += 2)
	{
		if (t[i] % 2)
			odd++;
		else
			even++;
	}
	if (odd && even)
	{
		cout << "NO" << nl;
		return ;
	}
	cout << "YES" << nl;
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
