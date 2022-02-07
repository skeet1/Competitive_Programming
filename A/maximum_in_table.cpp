#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector< vector<int> > t(n, vector<int> (n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0 || i == 0)
				t[i][j] = 1;
			else
			{
				t[i][j] = t[i - 1][j] + t[i][j - 1];
			}
		}
	}
	cout << t[n - 1][n - 1] << endl;
}
