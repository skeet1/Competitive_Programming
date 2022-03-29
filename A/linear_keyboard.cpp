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
	string key, s; cin >> key >> s;
	int res = 0;
	if (s.size() == 1)
	{
		cout << 0 << nl;
		return ;
	}
	int p = 0;
	for (int i = 0; i < key.size(); i++)
		if (key[i] == s[0])
		{
			p = i;
			break;
		}
	for (int i = 1; i < s.size(); i++)
	{
		for (int j = 0; j < key.size(); j++)
		{
			if (s[i] == key[j])
			{
				res += abs(j - p);
				p = j;
				break;
			}
		}
	}
	cout << res << nl;
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
