#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	sort(t.begin(), t.end());
	int ans = 0;
	for (int i = 0; i < n - 1; i++)
		ans += t[n - 1] - t[i];
	cout << ans << endl;
}
