#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	string s; cin >> s;
	int d = 0, r = 0;
	d = s[0] - 'a';
	if (d > 13)
		d = 26 - d;
	r += d;
	for (int i = 1; i < s.length(); i++)
	{
		d = s[i] - s[i - 1];
		if (d < 0)
			d = 26 + d;
		if (d > 13)
			d = 26 - d;
		r += d;
	}
	cout << r << endl;
}
