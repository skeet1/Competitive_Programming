#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	string s;
	getline(cin, s);
	sort(s.begin(), s.end());
	int count = 0, i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
		count++;
	while (s[++i])
		if (s[i] >= 'a' && s[i] <= 'z')
			if (s[i] != s[i - 1])
				count++;
	cout << count << endl;
}
