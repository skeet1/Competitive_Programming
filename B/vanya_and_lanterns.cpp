#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;
int main()
{
	int	n, l;
	cin >> n;
	cin >> l;
	float mx = 0;
	vector<int> tab(n);
	int i = 0;
	while (i < n)
	{
		cin >> tab[i];
		i++;
	}
	sort(tab.begin(), tab.end());
	i = 1;
	mx = max(2 * tab[0], (l- tab[n-1])*2);
	while (i < n)
	{
		if (tab[i] - tab[i - 1] > mx)
			mx = tab[i]  - tab[i - 1];
		i++;
	}
	cout << fixed;
	cout << setprecision(10) <<  mx / 2 << endl;
}
