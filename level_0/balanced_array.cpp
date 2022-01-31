#include <iostream>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		if ((n / 2) % 2 == 0)
		{
			int i;
			cout << "YES" << endl;
			for (i = 2; i <= n; i += 2)
				cout << i << " ";
			for (i = 1; i < n - 1; i += 2)
				cout << i << " " ;
			cout << i + n / 2 << endl;
		}
		else
			cout << "NO" << endl;
	}
}
