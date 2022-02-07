#include <iostream>

using namespace std;
int main()
{
	int n; cin >> n;
	int r = 0;
	while (n--)
	{
		string s; cin >> s;
		if (s[0] == 'T')
			r += 4;
		else if (s[0] == 'C')
			r += 6;
		else if (s[0] == 'O')
			r += 8;
		else if (s[0] == 'D')
			r += 12;
		else
			r += 20;
	}
	cout << r << endl;
}
