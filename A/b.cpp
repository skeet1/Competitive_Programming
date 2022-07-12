#include <iostream>

using namespace std;

int before(string s, int n, char c)
{
	int i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res++;
		res += before(s, i, s[i]);
	}
	cout << res << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--)
		solve();
}
