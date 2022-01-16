#include <iostream>

using namespace std;
int main()
{
	int n; cin >> n;
	int a, b , c;
	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;
	int x, y, z;
	x = a * 100 + b * 10 + c;
	y = b * 100 + c * 10 + a;
	z = c * 100 + a * 10 + b;
	cout << x + y + z << endl;
}
