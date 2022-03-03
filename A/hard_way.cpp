#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		long long res = 0;
		if (y1 == y2 && y3 < y1)
		{
			if (y1)
				res =  abs(x1 - x2);
		}
		else if (y1 == y3 && y2 < y1)
		{
			if (y1)
				res =  abs(x1 - x3);
		}
		else if (y2 == y3 && y1 < y2)
		{
			if (y2)
				res = abs(x2 - x3);
		}
		cout << res << endl;
	}
}
