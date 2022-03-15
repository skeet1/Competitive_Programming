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
#define L length()

void	solve()
{
	int n; cin >>n;
	if ((n * (n + 1)) % 4 != 0)
	{
		cout << "NO" << nl;
		return ;
	}
	else
	{
		cout << "YES" << nl;
		vi fs;
		vi ss;
		int sofs1 = 0;
		int s = (n * (n + 1)) / 4;
		for (int i = n; i > 0; i--)
		{
			if (sofs1 + i <= s)
			{
				fs.PB(i);
				sofs1 += i;
			}
			else
				ss.PB(i);
		}
		cout << fs.Z << nl;
		for (int i = 0; i < fs.Z; i++)
			cout << fs[i] << (i == fs.Z-1 ? '\n' : ' ');
		cout << ss.Z << nl;
		for (int i = 0; i < ss.Z; i++)
			cout << ss[i] << (i == ss.Z-1 ? '\n' : ' ');
	}
}

signed main()
{
    int t;
	t = 1;
    while(t--)
    {
        solve();
    }
}
