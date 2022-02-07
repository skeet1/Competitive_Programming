#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int b = 0;
	b += n / 100; n %= 100;
	b += n / 20; n %= 20;
	b += n / 10; n %= 10;
	b += n / 5; n %= 5;
	b += n;
	cout << b << endl;
}
