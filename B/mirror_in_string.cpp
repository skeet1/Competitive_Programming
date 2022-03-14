#include <iostream>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		int k = 1;
		for (int i = 1; i < n; i++)
		{
			if (s[i] <= s[i - 1])
				k++;
			else
				break;
		}
		for (int z = 0; z < k; z++)
			cout << s[z];
		for (int z = k - 1; z >= 0; z--)
			cout << s[z];
		cout << endl;
	}
}
