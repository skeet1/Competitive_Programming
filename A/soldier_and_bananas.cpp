#include <iostream>

using namespace std;

int main()
{
	int	k, n, w, i, p;

	cin >> k;
	cin >> n;
	cin >> w;
	i = 0;
	p = 0;
	while (i < w)
	{
		p += k * (i + 1);
		i++;
	}
	if (n > p)
		cout << 0 << endl;
	else
		cout << p - n <<endl;
}
