#include <iostream>

using namespace std;
int main()
{
	string s;
	int	r = 0, i = 0;

	cin >> s;
	while (s[i])
	{
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
			r = 1;
		i++;
	}
	if (r == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
