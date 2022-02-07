#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int	n, k, i, res;

	cin >> n;
	cin >> k;
	res = 0;
	vector<int> tab(n);

	for (i = 0; i < n; i++)
		cin >> tab[i];
	for (i = 0; i < n; i++)
	{
		if (tab[i] >= tab[k - 1] && tab[i] > 0)
			res++;
	}
	cout << res << endl;
}
