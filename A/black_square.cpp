#include <iostream>

using namespace std;
int main()
{
	int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
	string s; cin >> s;
	int r = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			r += a1;
		else if (s[i] == '2')
			r += a2;
		else if (s[i] == '3')
			r += a3;
		else if (s[i] == '4')
			r += a4;
	}
	cout << r << endl;
}	
