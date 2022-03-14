#include <iostream>
#include <vector>
#include <algorithm>

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
		int ans = 1;
		int yes;
		for (int i = 1; i < n; i++)
		{
			yes = 1;
			int r = 0;
			for (int j = i - 1; j >= 0; j--)
			{
				if (t[j] == t[i] || t[j] + t[i] == 0)
					r++;
			}
			if (t[i] == 0 && r > 0)
				yes = 0;
			else if (r > 1)
				yes = 0;

			if (yes == 1)
			{
				ans++;
				t[i] *= -1;
				
			}
		}
		cout << ans << endl;
	}
}
