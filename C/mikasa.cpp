#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;
int main()
{
	int t; cin>> t;
a:while (t--)
	{
		int n, k;
		cin >> n >> k;
		if (k == 0 || n == 0)
		{
			if (k == 0 && n == 0)
				cout << 1 << endl;
			else if (k == 0)
				cout << 0 << endl;
			else
				cout << k + 1 << endl;
			goto a;
		}
		vector<ll> t(k + 1);
		for (int i = 0; i <= k; i++)
			t[i] = (n ^ i);
		sort(t.begin(), t.end());
		int i;
		if (t[0] != 0)
		{
			cout << 0 << endl;
			goto a;
		}
		else
		{
			for (i = 0; i < k; i++)
			{
				if (t[i + 1] - t[i] > 1)
				{
					cout << t[i] + 1 << endl;
					goto a;
				}
			}
		}
		cout << t[k] + 1 << endl;
	}
}
