#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long x, y;
		cin >> x >> y;
		long long res = max(x, y) * max(x, y);
		if (min(x, y) == y && y % 2 == 1)
			res -= x * 2 - y - 1;
		else
			res -= x - 1;
		cout << res << '\n';
	}
}
