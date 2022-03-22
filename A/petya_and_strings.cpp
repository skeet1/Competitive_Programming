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
	string s1, s2; cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	int ans = 0;
	for (int i = 0; i < s1.length(); i++)
		if (s1[i] != s2[i])
		{
			if (s2[i] > s1[i]) ans = -1;
			else ans = 1;
			break;
		}
	cout << ans << nl;
}

signed main()
{
    int t;
//    cin >> t;
	t = 1;
    while(t--)
    {
        solve();
    }
}
