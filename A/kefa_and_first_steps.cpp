#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tab(n);
	int res = 1, max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		if (i > 0)
		{
			if (tab[i] >= tab[i - 1])
				res++;
			else
				res = 1;
		}
		if (max < res)
			max = res;
	}
	cout << max << endl;
}
