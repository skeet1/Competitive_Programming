#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	vector<int>t(4);
	for (int i = 0; i < 4; i++)
		cin >> t[i];
	sort(t.begin(), t.end());
	cout << t[3] - t[0] << " " << t[3] - t[2] << " " << t[3] - t[1] << endl;
}
