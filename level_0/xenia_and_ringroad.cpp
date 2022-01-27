#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	vector<int>t(m);
	for (int i = 0; i < m; i++)
		cin >> t[i];
	long long r = 0;
	r = t[0] - 1;
	long long d = 0;
	for (int i = 1; i < m; i++)
	{
		d = t[i] - t[i - 1];
		if (d < 0)
			d = n + d;
		r += d;
	}
	cout << r << endl;
}

