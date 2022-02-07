#include <iostream>

using namespace std;
int main()
{
	string s;
	cin >> s;
	int i = 0;
	while (s[i])
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
			i += 2;
		else
			break;
		i++;
	}
	while (s[i])
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			if (s[i+3])
				cout << " ";
			i += 2;
		}
		else
			cout << s[i];
		i++;
	}
}


