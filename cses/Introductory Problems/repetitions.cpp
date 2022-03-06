#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int res = 1;
	int mx = 1;
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i - 1])
			res++;
		else
		{
			res = 1;
		}
		mx = max(res, mx);
	}
	cout << mx << '\n';
}
