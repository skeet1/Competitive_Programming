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
		int lm = 0;
		int mx;
		for (int i = 1; i < n - 1; i++)
		{
			if (t[i] > t[i - 1] && t[i] > t[i + 1])
			{
				lm++;
				if (i < n - 2)
					mx = max(max(t[i], t[i + 1]), t[i + 2]);
				else
					mx = max(t[i], t[i + 1]);
				t[i + 1] = mx;
			}
		}
		cout << lm << endl;
		for (int i = 0; i < n; i++)
		{
			cout << t[i];
			if (i < n - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
}
