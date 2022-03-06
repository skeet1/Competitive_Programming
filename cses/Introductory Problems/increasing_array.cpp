#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> t(n);
	long long res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		if (i > 0)
		{
			if (t[i] < t[i - 1])
			{
				res += t[i - 1] - t[i];
				t[i] = t[i - 1];
			}
		}
	}
	cout << res << '\n';
}

