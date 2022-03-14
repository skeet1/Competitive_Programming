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
	int r = 0;
	for (int i = 0; i < n; i++)
	{
		if (t[i] == n - i + r)
		{
			if (r == 0)
				cout << t[i] << ' ';
			else
			{
				for (int j = 0; j <= r; j++)
					cout << t[i]-- << ' ';
			}
			cout << '\n';
			r = 0;
		}
		else
		{
			cout << '\n';
			r++;
		}
	}
}
