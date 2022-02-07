#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int	i;
	int	j = 0;
	int yes = 0;
	char h[] = "hello";
	i = 0;
	while (s[i])
	{
		if (s[i] == h[j])
		{
			j++;
			if (h[j] == '\0')
				yes = 1;
		}
		i++;
	}
	if (yes)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

