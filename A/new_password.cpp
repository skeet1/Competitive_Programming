#include <iostream>

using namespace std;
int main()
{
	int n, k; cin >> n >> k;
	char c = 'a';
	while (k-- && n--)
		cout << c++;
	int i = 0;
	c--;
	while (n--)
		i++ % 2 == 0 ? cout << --c : cout << ++c;
}
