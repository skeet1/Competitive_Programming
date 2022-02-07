#include <iostream>

using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	int d = 0;
	while (n * m)
	{
		n--;
		m--;
		d++;
	}
	if (d % 2 == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;
}
