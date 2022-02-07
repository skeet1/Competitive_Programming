#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >>n;
		vector<int>t(n);
		for (int i = 0; i < n; i++)
			cin>> t[i];
		int d = 0;
		for (int i = 0; i < n; i++)
			if (t[i] - d > i + 1)
				d += t[i] - d - i - 1;
		cout << d << endl;
	}
}
