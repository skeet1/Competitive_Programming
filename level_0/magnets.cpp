#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int	n; cin >> n;
	vector<int> tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	int r = 1;
	for (int i = 1; i < n; i++)
		if (tab[i] != tab[i - 1])
			r++;
	cout << r;
}
