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
	string	s;
	cin >> s;
	int res = 0;
	if (s.L == 1)
		cout << "Bob " << s[0] - 96 << nl;
	else if (s.L % 2)
	{
		if (s[0] > s[s.L - 1])
		{
			for (int i = 0; i < s.L - 1; i++)
				res += (s[i] - 96);
			cout << "Alice " << res - (s[s.L - 1] - 96) << nl;
		}
		else
		{
			for (int i = 1; i < s.L; i++)
				res += (s[i] - 96);
			cout << "Alice " << res - (s[0] - 96) << nl;
		}
	}
	else
	{
		for (int i = 0; i < s.L; i++)
			res += (s[i] - 96);
		cout << "Alice " << res << nl;
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
