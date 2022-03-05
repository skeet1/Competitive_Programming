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
#define ln '\n'
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
 
signed main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int>t(n);
		for (int i  = 0; i < n; i++)
			cin >> t[i];
		sort(t.begin(), t.end());
		ll sb = 0, sr = 0;
		sb = t[0];
		for (int i = 1; i <= n / 2; i++)
		{
			sb += t[i];
			sr += t[n - i];
		}
		if (sb < sr)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}
