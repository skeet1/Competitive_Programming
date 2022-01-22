#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n; cin >> n;
	int count = 0, tmp = 0;
	vector<int>tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	int imin, imax, max = 0, min = 101;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] <= min)
		{
			min = tab[i];
			imin = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			imax = i;
		}
	}
	if (imax > imin)
		cout << (imax - 0) + ((n - 1) - imin) - 1 << endl;
	else
		cout << (imax - 0) + ((n - 1) - imin) << endl;
}
