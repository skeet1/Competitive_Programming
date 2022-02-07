#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>t(n);
	int i, j;
	for (i = 0; i < n; i++)
		cin >> t[i];
	int l, g, r = 0;
	for (i = 1; i < n; i++)
	{
		l = 0;
		g = 0;
		for (j = 0; j < i; j++)
			if (t[i] > t[j])
				g++;
		for (j = 0; j < i; j++)
			if (t[i] < t[j])
				l++;
		if (l == i - 0 || g == i - 0)
			r++;
	}
	cout << r << endl;
}

