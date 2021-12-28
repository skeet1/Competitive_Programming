#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int	n,i;

	cin >> n;
	vector<int> tab(n);
	for (i = 0; i < n; i++)
		cin >> tab[i];
	sort(tab.rbegin(), tab.rend());
	for (i = 0; i < n; i++)
		cout << tab[i] << " ";
	cout << endl;
}
