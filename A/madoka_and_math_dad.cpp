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
	int n;
	cin >> n;
	if (n == 2 || n == 1)
	{
		cout << n << nl;
		return;
	}
	if (n % 3 == 0 || n % 3 == 2)
	{
		int d = 0;
		if (n % 3 == 2)
			d = 1;
		for (int i = 0; i < (n / 3) * 2 + d; i++)
		{
			if (i % 2)
				cout << 1;
			else
				cout << 2;
		}
	}
	else
	{
		for (int i = 0; i <= (n / 3) * 2; i++)
		{
			if (i % 2)
				cout << 2;
			else
				cout << 1;
		}
	}
	cout << nl;


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
