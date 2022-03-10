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
	if (n > 19)
	{
		cout << "NO" << nl;
		return ;
	}
	else
	{
		int p = 3;
		cout << "YES" << nl;
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
				cout << "1 ";
			else
			{
				cout << p;
				if (i == n -1)
					cout << nl;
				else
					cout << " ";
				p = p * 3;
			}
		}
	}

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
