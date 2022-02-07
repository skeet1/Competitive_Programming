#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int	ft_check(string s)
{
	int	i = 0, j;
	while (s[i])
	{
		j = 1;
		while (s[i + j])
		{
			if (s[i] == s[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int main()
{
	int	n;
	cin >> n;
	string s;
	while (n)
	{
		n++;
		s = to_string(n);
		if (ft_check(s) == 1)
		{
			cout << n << endl;
			return (0);
		}
	}
}
