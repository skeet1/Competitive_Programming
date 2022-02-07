#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int ans = 0;
	vector<int>t(n);
	int i;
	for (i = 0; i < n; i++)
		cin >> t[i];
	i = 0;
	a:while (i < n)
	{
		if (t[i] % 10 >= k)
		{
			i++;
			goto a;
		}
		ans++;
		i++;
	 }
	 cout << ans << endl;
}
