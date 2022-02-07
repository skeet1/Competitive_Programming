#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tab(n);
	int one = 0, two = 0, th = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		if (tab[i] == 1)
			one++;
		else if (tab[i] == 2)
			two++;
		else
			th++;
	}
	int mn = min({one, two, th});
	int j = 0, k = 0, d = 0;
	cout << mn << endl;
	for (int i = 0; i < mn; i++)
	{
		while (tab[j] != 1)
			j++;
		while (tab[k] != 2)
			k++;
		while (tab[d] != 3)
			d++;
		cout << ++j << " " << ++k << " " << ++d << endl;
	}
}
