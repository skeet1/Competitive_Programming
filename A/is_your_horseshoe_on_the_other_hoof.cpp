#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int>tab(4);
	for (int i = 0; i < 4; i++)
		cin >> tab[i];
	int r = 0;
	for (int i = 1; i < 4; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (tab[i] == tab[j])
			{
				r++;
				break;
			}
		}
	}
	cout << r << endl;
}
