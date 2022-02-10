#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		if (n % 3 == 0)
			cout << n / 3 << " " << n / 3 << endl;
		else
		{
			int r = n % 3;
			if (r % 2 == 0)
				cout << (n / 3) << " " << (n / 3) + 1 << endl;
			else
				cout << (n / 3) + 1 << " " << n / 3 << endl;
		}
	}
}
