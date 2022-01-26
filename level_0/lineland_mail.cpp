#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	cout << abs(t[0] - t[1]) << " " << abs(t[0] - t[n - 1]) << endl;
	for (int i = 1; i < n - 1; i++)
		cout << min(abs(t[i] - t[i - 1]), abs(t[i] - t[i+1])) << " " << max(abs(t[i] - t[0]), abs(t[i] - t[n - 1])) << endl;
	cout << abs(t[n -1] - t[n - 2]) << " " << abs(t[n-1] - t[0]) << endl;
}
		
