#include <iostream>

using namespace std;
int main()
{
	int	k, r; cin >> k >> r;

	int n = 1;
	int i = 1;
	while (((k * i) - r) % 10 != 0 && (k * i) % 10 != 0)
	{
		i++;
		n++;
	}
	cout << n << endl;
}
