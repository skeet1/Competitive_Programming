#include <iostream>
#include <cmath>

#define nl "\n"
using namespace std;

void	solve()
{
	int n;
	cin >> n;
	int i  = 0;
	int res = 10;
	while (pow(res, i) <= n)
		i++;
	res = pow(res, i) / 10;
	cout << n - res << nl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}
