#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
	long long  n, k; cin >> n >> k;
	vector<long long> tab(n+1, 1);
	long long ind = 1;
	long long start = 2;
	if (k > (n / 2) + 1)
	{
		ind = (n / 2) + 2;
		goto A;
	}
	for (long long i = 1; i <= n; i+= 2)
	{
		tab[ind] = i;
		if (ind == k)
		{
			cout << tab[ind] << endl;
			return (0);
		}
		ind++;
	}
	A:for (long long i = start; i <= n; i+= 2)
	{
		tab[ind] = i;
		if (ind == k)
		{
			cout << tab[ind] << endl;
			return (0);
		}
		ind++;
	}
}
