#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int nw;
	int	i;
	cin >> nw;
	char	s[nw][100];
	for (i = 0; i < nw; i++)
		cin >> s[i];
	for (i = 0; i < nw; i++)
	{
		if (strlen(s[i]) < 11)
			cout << s[i] << "\n";
		else if (strlen(s[i]) >= 100)
			cout << s[i][0] << 98 << s[i][100 - 1] << "\n";
		else
			cout << s[i][0] << strlen(s[i]) - 2<< s[i][strlen(s[i]) - 1] << "\n";
	}
}
