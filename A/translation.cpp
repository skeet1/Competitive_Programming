#include <iostream>

using namespace std;
int main()
{
	string s;
	string t;
	int	i;
	int	j, no;
	cin >> s;
	cin >> t;
	i = 0;
	no = 0;
	while (s[i])
		i++;
	j = 0;
	while (t[j])
	{
		if (t[j] != s[--i])
			no = 1;
		j++;
	}
	if (no==1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}
