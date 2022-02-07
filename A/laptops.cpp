#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>a(n+1, 1);
	vector<int>b(n+1, 1);
	a[0] = 0;
	b[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	for (int i = 1; i <= n; i++)
		if (b[i] - a[i] > b[i - 1] - a[i - 1])
		{
			cout << "Happy Alex" << endl;
			return (0);
		}
	cout << "Poor Alex" << endl;
}
