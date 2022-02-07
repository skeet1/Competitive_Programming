#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int	n;
	cin >> n;
	vector<int>tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	sort (tab.begin(), tab.end(), greater<int>());
	int c = 1, sc = 0, r = 0, j;
	for (int i = 0; i < c; i++)
	{
		sc = 0;
		r = 0;
		for (j = 0; j < c; j++)
			sc += tab[j];
		for (int k = j; k < n; k++)
			r += tab[k];
		if (sc > r)
		{
			cout << c << endl;
			return (0);
		}
		else
			c++;
	}
}

