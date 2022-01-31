#include <iostream>
 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int l; cin >> l;
		string s; cin >> s;
		if (l == 1) cout << "YES" << endl;
		else if (l == 2)
			s[0] == s[1] ? cout << "NO" << endl : cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
