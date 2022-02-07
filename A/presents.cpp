#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tab(n+1, 1);
	for (int i = 1; i<= n; i++)
		cin >> tab[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == tab[j])
			{
				cout << j;
				if (i < n)
					cout << " ";
				break;
			}
		}
	}
}
