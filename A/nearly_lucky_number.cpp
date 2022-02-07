#include <iostream>

using namespace std;
int main()
{
	long long int n;
	cin >> n;
	int no;
	no = 0;
	while(n != 0)
	{
		if (n % 10 == 4 || n % 10 == 7)
			no++;
		n /= 10;
	}
	if ((no != 0) && (no == 4 || no == 7))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
