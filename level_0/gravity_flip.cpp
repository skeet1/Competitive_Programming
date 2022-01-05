#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	sort(tab.begin(), tab.end());
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1)
			cout << tab[i] << " ";
		else
			cout << tab[i] << endl;
	}
}
