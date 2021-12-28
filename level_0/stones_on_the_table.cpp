#include <iostream>

using namespace std;

int main()
{
	int	len;
	cin >> len;
	char	s[len+1];
	cin.getline(s, len+1);

	int	i = 1;
	int min = 0;
	while (i < len+1)
	{
		if (s[i] == s[i-1])
			min++;
		i++;
	}
	cout << min;
}
