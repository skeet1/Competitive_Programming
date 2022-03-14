#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	isbefore( vector<int> t, int n, int i)
{
	int j = 0; 
	while (j < i)
	{
		if (t[j] > n)
			return (0);
		j++;
	}
	return (1);
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int>t(n);
		for (int i = 0; i < n; i++)
			cin >> t[i];
		int ans = 1;
		for (int i = 1; i < n; i++)
		{
			int yes = 1;
			for (int j = i; j < n; j++)
			{
				if (isbefore(t, t[j], i) == 0)
					yes = 0;
			}
		//	cout << i << " " << ans << endl;
			if (yes)
				ans++;
		}

		cout << ans << endl;
	}
}

