#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>a(n);
	vector<int>b(n);
	int same = 0, maybe = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] == b[i])
			same++;
		if (i > 0)
		{
			if (a[i] > a[i - 1] && b[i] > b[i - 1])
				maybe++;
		}
	}
	if (same == n && maybe)
		cout << "unrated" << '\n';
	else if (n != same)
		cout << "rated" << '\n';
	else
		cout << "maybe" << '\n';
}
