#include <iostream>
#include <vector>

using namespace std;
int main()
{
	long long	n, m; cin >> n >> m;
	vector<long long>x(n);
	vector<char>s(n);
	for (int i = 0; i < n; i++)
		cin >> s[i] >> x[i];
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '+')
			m += x[i];
		else
		{
			if (m >= x[i])
				m -= x[i];
			else
				d++;
		}
	}
	cout << m << " " << d << endl;
}
