#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int	n; cin >> n;
	int r = 0;
	string s; cin >> s;
	for (int i = 1; i < n; i++)
		if (s[i] == s[i - 1])
			r++;
	cout << r << endl;
}
