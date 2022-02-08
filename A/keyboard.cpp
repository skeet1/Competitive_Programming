#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int pos_of_char(string s, char c)
{
	for (int i = 0; i < s.length(); i++)
		if (s[i] == c)
			return (i);
	return (0);
}

int main()
{
	char c; cin >> c;
	string s; cin >> s;
	int p = 0;
	c == 'R' ? p = -1: p = 1;
	string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";
	for (int i = 0; i < s.length(); i++)
		cout << ss[pos_of_char(ss, s[i]) + p];
	cout << endl;
}
