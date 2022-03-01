#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int>t(2 * n);
		int odd = 0, even = 0;
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> t[i];
			if (t[i] % 2 == 0)
				even++;
			else
				odd++;
		}
		if (even == odd)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';
	}
}

