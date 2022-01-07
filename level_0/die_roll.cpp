#include <iostream>

using namespace std;
int main()
{
	int a, b; cin >> a >> b;
	int x = 0;
	a = max(a, b);
	x = 6 - a + 1;
	if (x == 1)
		cout << "1/6" << endl;
	else if (x == 2)
		cout << "1/3" << endl;
	else if (x == 3)
		cout << "1/2" << endl;
	else if (x == 6)
		cout << "1/1" << endl;
	else if (x == 4)
		cout << "2/3" << endl;
	else
		cout << x << "/6" << endl;
}
