#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int	n; cin >> n;
	vector<int>tab(n);

	int h = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		if (tab[i] == 1)
			h = 1;
	}
	if (h == 1)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;
}	
