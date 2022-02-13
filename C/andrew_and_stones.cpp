#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	long long t; cin >> t;
	while (t--)
	{
		long long n; cin >> n;
		vector<long long>t(n);
		long long no = 0;
		long long ans = 0, odd = 0, one = 0;
		for (long long i = 0; i < n; i++)
		{
			cin >> t[i];
			if (i > 0 && i < n - 1)
			{
				if (t[i] == 1)
					one++;
				if (t[i] % 2 == 1)
				{
					odd++;
					ans += t[i] / 2 + 1;
				}
				else
					ans += t[i] / 2;
			}
		}
		if ((odd == 1 && n == 3) || (n - 2 == one && odd > 0))
			cout << -1 << endl;
		else
			cout << ans << endl;
	}
}
