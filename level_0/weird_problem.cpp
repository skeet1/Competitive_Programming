#include <iostream>
#include <vector>

using namespace std;
int main()
{
	long n; cin >> n;
	cout << n;
	while (n > 1)
	{
		cout << " ";
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cout << n;
	}
}
