#include <iostream>

using namespace std;
int main()
{
	int	a, b, y;
	cin >> a;
	cin >> b;
	y = 0;
	while (b >= a)
	{
		a *= 3;
		b *= 2;
		y++;
	}
	cout << y;
}
