#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>t(n);
	vector<int>ts(n);
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		ts[i] = t[i];
	}
	sort(ts.rbegin(), ts.rend());
	int p = 1;
	for (int i = 0; i < n; i++)
	{
		if (t[i] < ts[i])
		{
			cout << endl;
			p++;
		}
		else
		{
			for (int j = 0; j < p; j++)
			{
				cout << t[i]--;
				if (j != p)
					cout << " ";
				else
					cout << endl;
			}
		}
	}
}
