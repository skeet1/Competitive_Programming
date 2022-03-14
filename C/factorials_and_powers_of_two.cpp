/* SKEET IS HERE */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>
#include <map>

using namespace std;
#define int long long
typedef long long ll;
typedef vector<int> vi;
#define F first
#define ln '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()
bool isPowerOfTwo(int x) {
    return (x > 0 && !(x & (x - 1)));
}


bool checkFac(long long n)
{
  for (int i = 1;; i++) {
    if (n % i == 0) {
      n /= i;
    }
    else {
      break;
    }
  }

  if (n == 1) {
    return true;
  }
  else {
    return false;
  }
}
signed main()
{
	int t; cin >> t;
	a:while (t--)
	{
		int n; cin >> n;
		ll odd = 0;
		int nn = n;
		int ad = 1;
		int res = 0;
		if (nn % 2)
		{
			odd++;
			nn -= 1;
		}
		int rep = 0;
		while (nn != 0)
		{
			res++;
			if (checkFac(nn) || isPowerOfTwo(nn))
			{
				cout << odd + res + rep<< '\n';
				goto a;
			}
			nn -= 2;
			rep++;
		}

	}
}
