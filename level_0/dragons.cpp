#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int s, n; cin >> s >> n;

	vector<int>x(n);
	vector<int>y(n);
	int win = 0;
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	a:for (int i = 0; i < n; i++)
	{
		if (s > x[i])
		{
			s += y[i];
			x[i] = 1000000000;
			i = 0;
			win++;
			goto a;
		}
	}
	  if (win == n)
		  cout << "YES" << endl;
	  else
		  cout << "NO" << endl;
}
