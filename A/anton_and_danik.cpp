#include <iostream>

using namespace std;
int main()
{
	int	n;
	string s;
	cin >> n;
	cin >> s;
	int a = 0, d = 0;
	int i = 0;
	while (i < n)
	{
		if (s[i] == 'A')
			a++;
		else if (s[i] == 'D')
			d++;
		i++;
	}
	if (a > d)
		cout << "Anton" << endl;
	else if (d > a)
		cout << "Danik" << endl;
	else 
		cout << "Friendship" << endl;
}
