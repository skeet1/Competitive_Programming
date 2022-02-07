#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int	n;
	cin >> n;
	vector<int> p(n);
	vector<int> q(n);
	int	i = 0, r = 0;
	while (i < n)
	{
		cin >> p[i];
		cin >> q[i];
		if (q[i] > p[i] + 1)
			r++;
		i++;
	}
	cout << r << endl;
}
