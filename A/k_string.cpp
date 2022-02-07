#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int k; cin >> k;
	string s; cin >> s;
	int nl = 1;
	int yes = 0;
	vector<char>ss(k);
	ss[0] = s[0];
	for (int i = 1; i < s.length(); i++)
	{
		yes = 0;
		for (int j = i - 1; j >= 0; j--)
			if (s[i] == s[j])
			{
				yes = 1;
				break;
			}
		if (yes == 0)
		{
			ss[nl] = s[i];
			nl++;
		}
	}
	if (nl == k)
	{
		for (int kk = 0; kk < nl; kk++)
			for (int z = 0; z < s.length() / 3; z++)
				cout << ss[z];
		cout << endl;
	}
	else
		cout << -1 << endl;
}
