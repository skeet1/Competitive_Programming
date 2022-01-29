#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int t; cin >> t;
	int ind = 0, m = 0;
	while (t--)
	{
		int n; cin >> n;
		vector<int>a(n);
		vector<int>b(n);
		ind = 0;
		m = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		int temp;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > b[i])
			{
				temp = a[i];
				a[i] = b[i];
				b[i] = temp;
			}
		}
		int m1 = 0, m2 = 0;
		for (int i = 0; i< n; i++)
			if (m1 < a[i])
				m1 = a[i];
		for (int i = 0; i < n; i++)
			if (m2 < b[i])
				m2 = b[i];
		cout << m1 * m2 << endl;
	}
}
