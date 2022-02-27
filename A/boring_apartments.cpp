#include <iostream>

using namespace std;

int sum(int n)
{
	int nd = 0;
	while (n)
	{
		nd++;
		n /= 10;
	}
	int r = 0;
	while (nd)
	{
		r += nd;
		nd--;
	}
	return (r);
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int res = 0;
		res = (n % 10 - 1) * 10 + sum(n);
		cout << res << " " << '\n';
	}
}
