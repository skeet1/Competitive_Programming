#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a, b; cin >> a >> b;
		if (a % 2 == 1 && b % 2 == 1)
		{
			if (((a + b) / 2) % 2 == 1)
				cout << 3 << endl;
			else
				cout << 1 << endl;
		}
