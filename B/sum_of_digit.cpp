#include <iostream>
using namespace std;
int main()
{
	string s; 
	cin >> s;
	long long sum = 0, sum2 = 0;
	int res = 1;
	int j = 0;
	if (s.length() == 1)
	{
		cout << '0' << '\n';
		return (0);
	}
	for (long long i = 0; i < s.length(); i++)
		sum += s[i] - 48;
	a:while (j && sum2 != 0)
	{
		sum += sum2 % 10;
		sum2 /= 10;
	}

	if (sum > 9)
	{
		j = 1;
		sum2 = sum;
		sum = 0;
		res++;
		goto a;
	}

	cout << res << '\n';
}
