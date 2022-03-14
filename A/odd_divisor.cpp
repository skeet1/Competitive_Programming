#include <iostream>

using namespace std;
#define nl '\n';
int main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n;
		if (n % 2 == 1)
		{
			cout << "YES" << nl;
			goto a;
		}
	}
}

