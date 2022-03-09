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
	int n, k; cin >> n >> k;
	if (n % 2 && k != 1)
	{
		cout << "NO" << nl;
		return ;
	}
	int even = 2;
	int odd = 1;
	cout << "YES" << nl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (i % 2 == 0)
			{
				cout << odd;
				if (j == k - 1)
					cout << nl;
				else
					cout << " ";
				odd += 2;
			}
			else
			{
				cout << even;
				if (j == k - 1)
					cout << nl;
				else
					cout << " ";
				even+= 2;
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
