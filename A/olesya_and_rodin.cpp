#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, t; cin >> t >> n;
	int res = 0;
	if (t < 10)
		cout << pow(10, n) * t << '\n';
	else
		cout << pow(10, n - 1) << '\n';
}
