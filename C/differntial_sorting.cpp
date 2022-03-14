#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int t; cin >> t;
a:while (t--)
	{
		int n; cin >> n; 
		vector<int>t(n);
		for (int i = 0; i < n; i++)
			cin >> t[i];
		if (is_sorted(t.begin(), t.end()))
			cout << 0 << endl;
		else if (is_sorted(t.rbegin(), t.rend()))
			cout << -1 << endl;
		else
		{
			vector<int> arr;
			for (int i = 0; i < n - 1; i++)
			{
				if (t[i] > t[i + 1])
					arr.push_back(i);
				/*
				if (is_sorted(t.begin() + i, t.end()))
				{
					cout << 0 << endl;
					goto a;
				}
				else if (is_sorted(t.rbegin() + i, t.rend()))
				{
					cout << -1 << endl;
					goto a;
				}
				*/
			}
			cout << arr.size() << endl;
			for (int i = 0; i < arr.size(); i++)
			{
				int y = 0, z = 0;
				for (int j = arr[i]; j < n; j++)
					if (t[j + 1] - t[j + 2] > t[j])
					{
						y = j + 1;
						z = j + 2;
						goto b;
					}
				b:cout << arr[i] + 1<< " " << y << " " << z << endl;
			}
		}
	}
}
