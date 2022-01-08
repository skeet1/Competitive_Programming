#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
	int n; cin >> n;
	int i = 0, j = 0;
	vector<int> x(n);
	vector<int> y(n);
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	int max1 = 0, max2 = 0, len = 0, maxl = 0;
	float res = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n ; j++)
		{
			len = abs(x[j] - x[i]) + abs(y[j] - y[i]);
			if (maxl < len)
			{
				maxl = len;
				max1 = i;
				max2 = j;
			}
		}
	}
	res = (abs(x[max2] - x[max1]) * abs(x[max2] - x[max1])) + (abs(y[max2] - y[max1]) * abs(y[max2] - y[max1]));

	cout << fixed;
	cout << setprecision(10) << sqrtl(res) << endl;
}
