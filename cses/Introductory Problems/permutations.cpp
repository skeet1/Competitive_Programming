#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	if (n < 4 && n != 1)
	{
		cout << "NO SOLUTION" << '\n';
		return (0);
	}
	for (int i = 2; i <= n; i += 2)
		cout << i << " ";
	for (int i = 1; i <= n; i += 2)
	{
		cout << i;
		if (i == n || i == n - 1)
			cout << '\n';
		else
			cout << " ";
	}
}
