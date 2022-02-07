#include <iostream>

using namespace std;
int main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n, k;
		cin >> n >> k;
		string s; cin >> s;
		if (k > 0)
		{
			for (int i = 0; i < n / 2; i++)
			{
				if (s[i] != s[n - 1 - i])
				{
					cout << 2 << endl;
					goto a;
				}
			}
		}
		cout << 1 << endl;
	}
}
