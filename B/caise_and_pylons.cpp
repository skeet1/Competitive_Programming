#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
int main()
{
	int n; cin >> n;
	vector<int>t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	ll ans = t[0];
	ll en = t[0];
	for (int i = 1; i < n; i++)
	{
		if (t[i] < en)
		{
			ans += abs(t[i] - t[i - 1]);
			en = t[i];
		}
	}
	cout << ans << endl;
}
