#include <iostream>

using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	int r = 0, t = 0;
	for (int i = 1; i <= n; i++)
	{
		t += 5 * i;
		if (t <= 240 - k)
			r++;
		else
			break;
	}
	cout << r << endl;
}
