#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
			cout << 0;
		else if (i < s.length() - 1)
		{
			if (s[i] == '-' && s[i + 1] == '.')
				cout << 1;
			else if (s[i] == '-' && s[i + 1] == '-')
				cout << 2;
			i++;
		}
	}
	cout << endl;
}
