#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		vector<int>a(n);
		vector<int>b(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i = 0; i < k; i++)
		{
			if (a[i] < b[n - 1 - i])
			{
				int temp = b[n - 1 - i];
				b[n - 1 - i] = a[i];
				a[i] = temp;
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i++)
			ans += a[i];
		cout << ans << endl;
	}
}
