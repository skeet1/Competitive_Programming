#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b)
{
	return a%2 < b%2;
}
int main()
{
	int	n, k, res, num, i;
	cin >> n;
	cin >> k;
	vector<int> tab(n);

	res = 0;
	
	for (i = 0; i < n; i++)
	{
		cin >> tab[i];
		if (num > k)
			res++;
	}
	sort(tab.begin(), tab.end(), cmp);
	sort(tab.rbegin(), tab.rend());
	for (i = 0; i < n; i++)
		cout << tab[i] << " ";
	cout << endl;
	cout << res << endl;
}
