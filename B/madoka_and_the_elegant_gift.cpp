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
	int n, m; cin >> n >> m;
	vector< vector<int> > t(n, vector<int> (m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> t[i][j];
		}
	}
	for (int i = 1; i < n - 1; i++)
	{
		int f = 0;
		for (int j = 1; j < m - 1; j++)
		{
			if (t[i][j] == 1)
				f++;
			if (t[i][j - 1])
				f++;
			if (t[i][j + 1])
				f++;
			if(t[i + 1][j])
				f++;
			if (t[i - 1][j])
				f++;
			if (t[i - 1][j - 1])
				f++;
			if (t[i - 1][j + 1])
				f++;
			if (t[i + 1][j - 1])
				f++;
			if (t[i + 1][j + 1])
				f++;
		}
		if (f > 4)
		{
			cout << "NO" << nl;
			return ;
		}
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
