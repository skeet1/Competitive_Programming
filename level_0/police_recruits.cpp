#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int> tab(n);
	int np = 0, cu = 0;
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	for (int i = 0; i < n; i++)
	{
		if (tab[i] > -1)
			np += tab[i];
		if (tab[i] == -1 && np == 0)
			cu++;
		if (tab[i] == -1 && np > 0)
			np--;
	}
	cout << cu << endl;
}
