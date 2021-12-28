#include <iostream>

using namespace std;

int main()
{
	char	s[1100];

	cin.getline(s, 1100);
	int i=1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i])
	{
		if (s[i-1] == ' ' && (s[i] >= 'a' && s[i] <= 'z'))
			s[i+1] -= 32;
		i++;
	}
	cout << s;
}
