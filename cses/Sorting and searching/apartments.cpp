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
	int n, m, k;
	cin >> n >> m >>k;
	vi a(n);
	vi b(m);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a.B, a.E);
	sort(b.B, b.E);
	int ans = 0;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		for (; j < m; j++)
		{
			if (b[j] > a[i] + k)
			{
				break;
			}
			if (a[i] - k <= b[j] && a[i] + k >= b[j])
			{
				ans++;
				i++;
			}
		}
	}
	cout << ans << nl;

}
signed main()
{
    int t;
  //  cin >> t;
	t = 1;
    while(t--)
    {
        solve();
    }
}
