#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int	t;cin >> t;
	vector<int>tab(t);
	int mx;
	while (t-- > 0)
	{
		int mmax = 0;
		for (int i = 0; i < 3; i++)
			cin >> tab[i];
		mx = max(tab[0], tab[1]);
		mx = max(mx, tab[2]);
		for (int i = 0; i < 3; i++)
			if (mx == tab[i])
				mmax++;
		if ((tab[0] == tab[1]) && (tab[1] == tab[2]))
			for (int i = 0; i < 3; i++)
				tab[i] = 1;
		else if (mmax > 1)
		{
			for (int i = 0; i < 3; i++)
			{
				if (tab[i] != mx)
					tab[i] = mx - tab[i] + 1;
				else
					tab[i] = 1;
			}
		}
		else {
			for (int i = 0; i < 3; i++)
			{
				if (tab[i] == mx)
					tab[i] = 0;
				else
					tab[i] = mx - tab[i] + 1;
			}
		}
		cout << tab[0] << " " << tab[1] << " " << tab[2] << endl;
	}
}
