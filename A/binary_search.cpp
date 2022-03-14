#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n,k; cin >> n >> k;
	vector<int> t(n);
	vector<int> q(k);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	for (int i = 0; i < k; i++)
		cin >> q[i];
	int i = 0;
	a:while (i < k)
	{
		int l = 0, r = n - 1;
		while (l < r)
		{
			if (q[i] == t[l] || q[i] == t[r])
			{
				cout << "YES" << endl;
				i++;
				goto a;
			}
			if (t[(l + r) / 2] >= q[i])
			   	r = (l + r) / 2;
			else
				l = (l + r) / 2;
		}
		cout << "NO" << endl;
		i++;
	}
}
