#include <iostream>

using namespace std;

int main()
{
	long m, n, a;
    long	res;

	cin >> m;
	cin >> n;
	cin >> a;
	res = 0;
	if (m % a == 0 && n % a == 0)
		res =  (m / a) * (n / a);
	else if (m % a == 0)
		res = m / a * ((n / a) + 1);
	else if (n % a == 0)
		res =  ((m / a) + 1) * n / a;
	else
		res =  ((m / a) + 1) * ((n / a) + 1);
	cout << res << "\n";
}
