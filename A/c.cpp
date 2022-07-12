#include <iostream>

#include <vector>

using namespace std;

void solve()
{
	int n; cin  >> n;
	vector<int> t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	for (int i = 0; i < n; i++)
	{
		int l; cin >> l;
		string s; cin>> s;
		for (int j = 0; j < l; j++)
		{
			if (s[j] == 'D')
				t[i]++;
			else
				t[i]--;
		}
	}
	int i;
	for (i = 0; i < n; i++)
	{
		if (t[i] < 0)
		{
			while (t[i] < 0)
				t[i] += 10;
		}
	}
	for (i = 0; i < n - 1; i++)
		cout << t[i] % 10 << " ";
	cout << t[i] % 10<< "\n";
}

int main()
{
	int t; cin >> t;
	while (t--)
		solve();
}
