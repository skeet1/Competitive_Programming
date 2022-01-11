#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	int len;
	int dif = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> len;
		vector<int> tab(len);
		for (int j = 0; j < len; j++)
			cin >> tab[j];
		sort(tab.begin(), tab.end());
		for (int j = 0; j < len -1; j++)
			dif += tab[len - 1] - tab[j];
		/*
		if (dif % (len / 2) != 0)
			cout << dif / (len / 2) << endl;
		else
			cout << dif << endl;
			cout << dif / (len / 2) + 1 << endl;
			*/
		cout << tab[len - 1] - tab[0] << endl;
	}
}
