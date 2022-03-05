#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<ll>t(n);
		vector<int>odd;
		vector<int>even;
		for (ll i = 0; i < n; i++)
		{
			cin >> t[i];
			if (t[i] % 2)
				odd.push_back(t[i]);
			else
				even.push_back(t[i]);
		}
		if (is_sorted(even.begin(), even.end()) && is_sorted(odd.begin(), odd.end()))
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}
