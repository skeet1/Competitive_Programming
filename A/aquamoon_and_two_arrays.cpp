#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n; cin >> n;
		vector<int>t(n);
		vector<int>tt(n);
		for (int i = 0; i < n; i++)
			cin >> t[i];
		for (int i = 0; i < n; i++)
			cin >> tt[i];
		int is;
		int a = 0, b = 0;
		for (int i = 0; i < n; i++)
		{
			is = 0;
			for (int j = 0; j < n; j++)
			{
				if (t[i] == tt[j])
				{
					is = 1;
					break;
				}
			}
			if (is == 0)
			{
				cout << "-1" << '\n';
				goto a;
			}
		}
		int yes = 0;
		for (int i = 0; i < n; i++)
		{
			if (t[i] > tt[i])
				a += t[i] - tt[i];
			else
				b += tt[i] - t[i];
			if (t[i] == tt[i])
				yes++;
		}
		if (a != b)
			goto a;
		if (yes == n)
		{
			cout << 0 << '\n';
			goto a;
		}
		int res = 0;
		vector<int>ri;
		vector<int>rj;
		for (int i = 0; i < n; i++)
		{
			if (t[i] < tt[i])
			{
				for (int j = i + 1; j < n; j++)
				{
					if (tt[j] < t[j])
					{
						res++;
						ri.push_back(j);
						rj.push_back(i);
					}
				}
			}
		}
		cout << res << '\n';
		for (int i = 0; i < ri.size(); i++)
			cout << ri[i] << " " << rj[i] << '\n';
	}
}


