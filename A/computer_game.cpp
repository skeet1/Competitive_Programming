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
	int n; cin >> n;
	string s1, s2; cin >> s1 >> s2;
	int z = 0;
	for (int i = 0; i < n; i++)
		if (s1[i] == '0' || s2[i] == '0')
			z++;
	if (z == n)
		cout << "YES" << nl;
	else
		cout << "NO" << nl;
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
