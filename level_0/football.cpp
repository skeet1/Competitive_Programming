#include <iostream>

using namespace std;
int main()
{
	char 	s[110];
	cin.getline(s, 110);
	int		i = 0, sc, yes = 0, d;
	while (s[i])
	{
		sc = 1;
		d = 0;
		while (s[i + d] == s[i + 1 + d])
		{
			sc++;
			d++;
		}
		if (sc >= 7)
			yes = 1;
		i++;
	}
	if (yes == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
