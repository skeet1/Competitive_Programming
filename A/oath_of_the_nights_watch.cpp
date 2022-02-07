#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>t(n);
	for (int i = 0; i < n; i++)
	       cin >> t[i];
	sort(t.begin(), t.end());
	int r = 0;
	for (int i = 1; i < n - 1; i++)
		if (t[i] > t[0] && t[i] < t[n - 1])
			r++;
	cout << r << endl;
}	
