#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	vector<int>t(3);
	for (int i = 0; i < 3; i++)
		cin >> t[i];
	sort(t.begin(), t.end());
	cout << t[2] - t[0] << endl;
}
