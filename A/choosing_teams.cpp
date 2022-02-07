#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	vector<int>t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	sort(t.begin(), t.end());
	int nc = 0;
	for (int i = 2; i < n; i+=3)
		if (t[i] + k <= 5)
			nc++;
	cout << nc << endl;
}
