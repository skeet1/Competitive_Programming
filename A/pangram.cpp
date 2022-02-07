#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int	isin(string s, char c)
{
	int 	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (1);
	return (0);
}

int main()
{
	int	n;
	cin >> n;
	string s;
	cin >> s;
	int i = -1;
	while (s[++i])
		s[i] = tolower(s[i]);
	for (i = 97; i <= 122; i++)
	{
		if (isin(s, i) == 0)
		{
			cout << "NO" << endl;
			return (0);
		}
	}
	cout << "YES" << endl;
}
