#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

int main()
{
	vi t(8);
	for (int i = 0; i < 8; i++)
		cin >> t[i];
	int sum = 0;
	int best = 0;
	for (int i = 0; i < 7; i++)
	{
		sum = 0;
		for (int j = i; j < 8; j++)
		{
			sum += t[j];
			best = max(sum, best);
		}
	}
	cout << best << endl;
}
