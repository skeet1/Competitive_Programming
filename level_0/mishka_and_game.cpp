#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n; cin >> n;
	vector<int>tm(n);
	vector<int>tc(n);
	int sm = 0, sc = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tm[i] >> tc[i];
		if (tm[i] > tc[i])
			sm++;
		else if (tc[i] > tm[i])
			sc++;
	}
	if (sc == sm)
		cout << "Friendship is magic!^^" << endl;
	else if (sc > sm)
		cout << "Chris" << endl;
	else
		cout << "Mishka" << endl;
}
