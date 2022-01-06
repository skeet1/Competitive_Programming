#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> tab(n);
	vector<int> tab1(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i] >> tab1[i];
	int r = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (tab[i] == tab1[j])
				r += 1;
	cout << r << endl;
}
