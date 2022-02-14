#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	ll  t; cin>> t;
	while (t--)
	{
		ll n; cin >> n;
		vector<ll>t(n);
		ll i, j;
		for (i = 0; i < n; i++)
			cin >> t[i];
		for (i = 0; i < n; i++)
			if (t[i] != i + 1)
				break;
		for (j = i; j < n; j++)
			if (t[j] == i + 1)
				break;
		ll l = abs(i - j);
		for (int k = 0; k <= l / 2; k++)
		{
			ll temp = t[i];
			t[i] = t[j];
			t[j] = temp;
			i++;
			j--;
		}
		for (int k = 0; k < n; k++)
		{
			if (k < n - 1)
				cout << t[k] << " ";
			else
				cout << t[k] << endl;
		}
	}
}
