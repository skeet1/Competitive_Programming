#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	if (tab[0] % 2 != tab[1] % 2 && tab[0] % 2 != tab[2] % 2)
	{
		cout << 1 << endl;
		return (0);
	}
	for (int i = 1; i < n; i++)
		if (tab[i] % 2 != tab[i - 1] % 2)
		{
			cout << i + 1 << endl;
			return (0);
		}
}
