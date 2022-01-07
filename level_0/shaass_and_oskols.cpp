#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tab(n, 1);
	for (int i = 1; i <= n; i++)
		cin >> tab[i];
	int ns; cin >> ns;
	int ps, nb; // nb : n of box & ps : position of shot
	for (int i = 0; i < ns; i++)
	{
		cin >> nb >> ps;
		tab[nb - 1] = tab[nb - 1] + ps - 1;
		tab[nb + 1] = tab[nb + 1] + tab[nb] - ps;
		tab[nb] = 0;
	}
	for (int i = 1; i <= n; i++)
		cout << tab[i] << endl;
}
