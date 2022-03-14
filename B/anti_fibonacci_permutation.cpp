#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int i = 0, j = 0;
		int p = 1;
		int pp;
		while (i < n)
		{
			int j = 1;
			vector<int>t(n);
			t[0] = p++;
			if (t[1] == n)
				t[1] = n - 1;
			else
				t[1] = n + 1;
			if (max(t[1], t[0]) == n)
			{
				pp = min(t[1], t[0]) - 1;
				for (j <
		}
	}
}

