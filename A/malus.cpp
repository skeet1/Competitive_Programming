#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
	string s1, s2; cin >> s1 >> s2;
	int mx = max(s1.length(), s2.length());
	int l = 0, i;
	for (i = 0; i < mx && (s1[i] && s2[i]); i++)
	{
		if (s1[i] == s2[i])
			l++;
	}
	if (l == i && i == mx)
		cout << -1 << endl;
	else
		cout << mx << endl;
}
