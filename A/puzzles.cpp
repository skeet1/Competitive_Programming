#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int	n, m; cin >> n >> m;
	vector<int>tab(m);
	for (int i = 0; i < m; i++)
		cin >> tab[i];
	sort(tab.begin(), tab.end());
	int min = 1000;
	for (int i = 0; i + n <= m; i++)
	{
		if (tab[i + n - 1] - tab[i] < min)
			min = tab[i + n - 1] - tab[i];
	}
	cout << min << endl;
}
