#include<iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int cp = min((k * l) / n, c * d);
	cout << min(cp, p / np) / max(n, nl) << endl;
}
