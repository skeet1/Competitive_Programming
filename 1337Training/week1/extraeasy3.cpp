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
	string s1, s2; cin >> s1 >> s2;
	int j = 0;
	for (int i = 0; i < s2.length(); i++)
	{
		for (; j < s1.length(); )
		{
			if (s2[i] == s1[j])
			{
				i++;
				j++;
			}
			else
				break;
		}
	}
	cout << j+1 << endl;
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
