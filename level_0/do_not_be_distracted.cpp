#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	a:while (t--)
	{
		int l; cin >> l;
		string s; cin >> s;
		if (l <= 2)
		{
			cout << "YES" << endl;
			goto a;
		}
		for (int i = 2; i < l; i++)
		{
			if (s[i] != s[i - 1])
			{
				int j = i;
				while (--j >= 0)
				{
					if (s[i] == s[j])
					{
						cout << "NO" << endl;
						goto a;
					}
				}
			}
		}
		cout << "YES" << endl;
	}
}
