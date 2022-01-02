#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int	i = 0, n, h;
	cin >> n;
	cin >> h;
	int r = 0;
	vector<int>tab(n);
	for (i = 0; i < n; i++)
	{
		cin >> tab[i];
		if (tab[i] > h)
			r += 2;
		else
			r += 1;
	}
	cout << r << endl;
}
