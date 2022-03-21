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
	string s; cin >> s;
	for (int i = 0; i < s.Z; i++)
	{
		for (int j = i + 1; j < s.Z; j++)
		{
			if (s[i] == s[j])
				break;
			else if (s[i] != s[j] && j == s.Z - 1)
			{
				for (; i <s.Z; i++)
					cout << s[i];
				cout << nl;
				return ;
			}
		}
	}
	cout << s[s.Z - 1] << nl;
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
