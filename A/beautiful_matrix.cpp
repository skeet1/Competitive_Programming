#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
int main()
{
	int	l = 5;
	int cl = 5;
	int i, j, pi, pj;
	//vector<int> tab(i);

	vector< vector<int> > tab(l, vector<int> (cl) ) ;

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < cl; j++)
		{
			cin >> tab[i][j];
			if (tab[i][j] == 1)
			{
				pi = i;
				pj = j;
			}
		}
	}
	cout << abs(pi - 2) + abs(pj - 2) << endl;
}

