#include <iostream>

using namespace std;
int main()
{
	int	x, s, n;

	s = 0;
	n = 5;
	cin >> x;
	while (n > 0)
	{
		s += x / n;
		x = x % n;
		n--;
	}
	cout << s << endl;
}
