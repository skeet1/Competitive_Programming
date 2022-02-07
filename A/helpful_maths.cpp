#include <iostream>

using namespace std;
int main()
{
	char	s[110];
	int	i = 0;
	int	one, two, three, np, p;
	cin.getline(s, 110);
	one = 0;
	two = 0;
	three = 0;
	while (s[i])
	{
		if (s[i] == '1')
			one++;
		else if (s[i] == '2')
			two++;
		else if (s[i] == '3')
			three++;
		i++;
	}
	np = one + two + three - 1;
	p = 0;
	for (i = 0; i < one; i++)
	{
		cout << "1";
		if (p < np)
		{
			cout << "+";
			p++;
		}
	}
	for (i = 0; i < two; i++)
	{
		cout << "2";
		if (p < np)
		{
			cout << "+";
			p++;
		}
	}
	for (i = 0; i < three; i++)
	{
		cout << "3";
		if (p < np)
		{
			cout << "+";
			p++;
		}
	}
}
