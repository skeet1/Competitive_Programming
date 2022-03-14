#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
typedef long long ll;
int main()
{
	ll n, m;
	pair<ll, ll> t;
	for (ll i = 0; i < m; i++)
		cin >> t.first >> t.second;
	for (ll i = 0; i < m; i++)
		cout << i << " " << t.first << " " << t.second << endl;
}
