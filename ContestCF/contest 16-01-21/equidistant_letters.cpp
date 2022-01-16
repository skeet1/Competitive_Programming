#include <iostream>

using namespace std;

int before(string s, char c, int n)
{
	while (--n >= 0)
		if (s[n] == c)
			return (1);
	return (0);
}

int isup(string s, char c, int n)
{
	while (s[++n])
	{
		if (s[n] == c)
			return (1);
	}
	return (0);
}

int main()
{
	int	t; cin >> t;
	int rt = 0;
	int i = 0;
	int two;
	while (t--)
	{
		string s; cin >> s;
		i = 0;
		two = 1;
		A:while (s[i])
		{
			two = 1;
			if (isup(s, s[i], i) == 1)
				two = 2;
			if (before(s, s[i], i) == 1)
			{
				i++;
				goto A;
			}
			for (int j = 0; j < two; j++)
				cout << s[i];
			i++;
		}
		cout << endl;
	}
}
