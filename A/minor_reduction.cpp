#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
	int t; cin >> t;
	A:while (t--)
	{
		int n1 = 0, n2 = 0;
		string s; cin >> s;
		if (s.length() == 2)
		{
			cout << s[0] - '0' << endl;
			goto A;
		}
		for (int i = s.length() - 1; i > 0; i--)
		{
			if ((s[i] - '0') + (s[i - 1] - '0') > 9)
			{
				for (int j = 0; j < i - 1; j++)
					cout << s[j];
				cout << s[i-1] - '0' + s[i] - '0';
				for (int j = i + 1; j < s.length(); j++)
					cout << s[j];
				cout << endl;
				goto A;
			}
		}
		for (int i = 0; i < s.length(); i++)
		{
			if ((s[i] - '0' + s[i + 1] - '0') > s[i] - '0')
			{
				for (int j = 0; j < i; j++)
					cout << s[j];
				cout << s[i] << s[i+1];
				for (int j = i+2; j < s.length(); j++)
					cout << s[j];
				cout << endl;
				goto A;
			}
		}
	}
}
