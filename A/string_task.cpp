#include <iostream>

using namespace std;

int	is_print(char c)
{
	char	s[15] = "aoyeuiAOYEUI";
	int		i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char s[110];
	cin.getline(s, 110);
	int i = 0;
	while (s[i])
	{
		if (is_print(s[i]) == 1)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
			cout << "." << s[i];
		}
		i++;
	}
}
