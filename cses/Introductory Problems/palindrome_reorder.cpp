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
	string s; cin >> s;
	vector<char> car;
	vi r;
	sort(s.B, s.E);
	car.PB(s[0]);
	int cr = 1;
	int odd = 0;
	int i = 1;
	while (i < s.length())
	{
		if (s[i] != s[i - 1])
		{
			r.PB(cr);
			if (cr % 2)
				odd++;
			car.PB(s[i]);
			cr = 1;
		}
		else
			cr++;
		i++;
	}
	r.PB(cr);
	if (cr % 2)
		odd++;
	if (odd > 1)
	{
		cout << "NO SOLUTION" << nl;
		return ;
	}
	vector<char> res;
	char odd_char = 'a';
	int odd_r = 0;
	for (int i = 0; i < r.Z; i++)
	{
		if (r[i] % 2)
		{
			odd_r = r[i];
			odd_char = car[i];
			break;
		}
	}
	for (int i = 0; i < r.Z; i++)
	{
		if (r[i] % 2 == 0)
		{
			for (int j = 0; j < r[i] / 2; j++)
				res.PB(car[i]);
		}
	}
	for (int j = 0; j < odd_r; j++)
		res.PB(odd_char);
	for (int i = 0; i < res.Z; i++)
		cout << res[i];
	for (int i = res.Z - 1; i >= 0; i--)
		if (res[i] != odd_char)
			cout << res[i];
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
