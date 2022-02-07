#include <iostream>
using namespace std;

int main()
{
	int	n;
	int	i, f, s , t;
	cin >> n;
	long long int res, yes;

	res = 0;
	for (i = 0; i < n; i++)
	{
		yes = 0;
		cin >> f;
		cin >> s;
		cin >> t;
		if (f == 1)
			yes++;
		if (s == 1)
			yes++;
		if (t == 1)
			yes++;
		if (yes > 1)
			res++;
	}
	cout << res << endl;
}
