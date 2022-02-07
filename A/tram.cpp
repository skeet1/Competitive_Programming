#include <iostream>

using namespace std;
int main()
{
	int	n, a, b, max, p;
	max = 0;
	p = 0;
	cin >> n;
	while (n > 0)
	{
		cin >> a;
		cin >> b;
		p = p + b - a;
		if (max < p)
			max = p;
		n--;
	}
	cout << max << endl;
}
