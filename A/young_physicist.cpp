#include <iostream>

#include <vector>
using namespace std;
int main()
{
	int	n, sx, sy, sz;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	vector<int> z(n);

	int i = 0;
	sx = 0;
	sy = 0;
	sz = 0;
	while (i < n)
	{
		cin >> x[i];
		cin >> y[i];
		cin >> z[i];
		sx += x[i];
		sy += y[i];
		sz += z[i];
		i++;
	}
	if (sx == 0 && sy == 0 && sz == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

