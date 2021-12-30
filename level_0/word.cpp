#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int	nu, nl, i;
	string  s;
	cin >> s;
	i = 0;
	nu = 0;
	nl= 0;
	while (s[i])
	{
		if (isupper(s[i]))
			nu++;
		if (islower(s[i]))
			nl++;
		i++;
	}
	i = 0;
	if (nl >= nu)
	{
		while (s[i])
		{
			s[i] = tolower(s[i]);
			i++;
		}
	}
	else
	{
		while (s[i])
		{
			s[i] = toupper(s[i]);
			i++;
		}
	}
	cout << s;
}

