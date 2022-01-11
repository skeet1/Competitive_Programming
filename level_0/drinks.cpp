#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
int main()
{
	float n; cin >> n;
	vector<float> tab(n);
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		s += tab[i];
	}
	cout << fixed;
	cout << setprecision(12) << s / n << endl;
}
