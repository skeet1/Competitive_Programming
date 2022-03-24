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
	int n; cin >>n;
	string s; cin >> s;
	int del = 0, ans = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == '(')
		{
			i++;
			ans++;
			del += 2;
		}
		else
		{
			i++;
			while (s[i])
			{
				if (s[i] == ')')
				{
					del = i + 1;
					ans++;
					break;
				}
				i++;
			}
		}
	}

	cout << ans << " " << n - del << nl;
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
