#include <iostream>

using namespace std;
int main()
{
	int	cd = 0;
	char s[110];
	cin.getline(s, 110);
	int		i = 0, b = 0, pp;
	while (s[i])
	{
		b = 0;
		pp = 1;
		while (b < i)
		{
			if (s[i] == s[b])
				pp = 0;
			b++;
		}
		cd += pp;
		i++;
	}
	if (cd % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}
