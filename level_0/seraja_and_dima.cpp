#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int	n; cin >> n;
	vector<int>tab(n);
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	int fi = 0, ei = n - 1, s = 0, d = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		if (tab[fi] > tab[ei])
		{
			max = tab[fi];
			fi++;
		}
		else
		{
			max = tab[ei];
			ei--;
		}
		if (i % 2 == 0)
			s+= max;
		else
			d += max;
	}
	cout << s << " " << d << endl;
}
