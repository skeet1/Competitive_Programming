#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int>t(n);
		for (int i = 0; i < n; i++)
			cin >> t[i];
		if (is_sorted(t.begin(), t.end()))
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
