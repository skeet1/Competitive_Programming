#include <iostream>

using namespace std;
int main()
{
	int	res, n, i, yes;
	char fs, ss, ts;
	res = 0;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		yes = 0;
		cin >> fs;
		cin >> ss;
		cin >> ts;
		if (fs == '+')
			yes++;
		if (ss == '+')
			yes++;
		if (ts == '+')
			yes++;
		if (fs == '-')
			yes--;
		if (ss == '-')
			yes--;
		if (ts == '-')
			yes--;
		if (yes == 2)
			res++;
		if (yes == -2)
			res--;
	}
	cout << res << endl;
}
