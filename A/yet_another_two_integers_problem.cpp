#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int a, b; cin >> a >> b;
		int d = abs(a - b);
		int r = d / 10;
		if (d % 10 != 0)
			r++;
		cout << r << endl;
	}
}
