#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n, a, b;
		cin >> n >> a >> b;
		int s = 1, s1 = 0, s2 = 0;
		while (1)
		{
			if (s1 == n || s2 == n)
			{
				cout << "Yes" << '\n';
				goto a;
			}
			if (s1 > n && s2 > n)
			{
				cout << "No" << '\n';
				goto a;
			}
			s1 = a * s;
			s2 = b + s;
			s = min(a * s, b + s);
		}
	}
}
