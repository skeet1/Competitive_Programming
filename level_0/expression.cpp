#include <iostream>

using namespace std;
int main()
{
	int	a, b, c;
	int max;
	cin >> a;
	cin >> b;
	cin >> c;
	max = 0;
	max = a * b * c;
	if (max < (a + b) * c)
		max = (a + b) * c;
	if (max < a * (b + c))
		max = a * (b + c);
	if (max < a + b + c)
		max = a + b + c;
	cout << max;
}
