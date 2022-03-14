#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n; cin>> n;
	vector<int> t(n);
	for (int i = 0; i < n; i++)
		cin >> t[i];
	cout << max_element(t.begin(), t.end()) - t.begin() << endl;
}
