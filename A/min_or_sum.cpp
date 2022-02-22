#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int>t(n);
		for (int i = 0; i < n; i++)
		{
			cin >> t[i];
			if (i > 0)
			{
				t[0] = (t[0] | t[i]);
			}
		}
		cout << t[0] << endl;
	}
}
