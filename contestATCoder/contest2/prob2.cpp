#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tab(n);
	for (int i = 0; i < n ; i++)
		cin >> tab[i];
	sort(tab.begin(), tab.end());
	for (int i = n -1; i > 0; i--)
	{
		if (tab[i] % tab[i - 1] == 0)
		{
			cout << tab[i] << endl;
			return (0);
		}
	}
}
