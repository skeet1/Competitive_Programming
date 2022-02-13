#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>t(n);

	for (int i = 0; i < n; i++)
		cin >> t[i];
	int res, mx = 0;
	for (int i = 0; i < n; i++)
	{
		res = 1;
		int j = i - 1;
		while (j >= 0)
		{
			if (t[j + 1] >= t[j])
				res++;
			else
				break;
			j--;
		}
		j = i + 1;
		while (j < n)
		{
			if (t[j - 1] >= t[j])
			   res++;
			else
				break;
			j++;
		}
		mx = max(res, mx);
	}
	cout << mx << endl;
}
