#include <iostream>

using namespace std;
int main()
{
	int x; cin >>x;
	int ft = 0, ftt = 0, fftt = 0, fft = 0;
	ft = x * x + 2 *x + 3;
	ftt = ft + x;
	fftt = ftt * ftt + 2 *ftt + 3;
	fft = ft * ft + 2 * ft + 3;
	cout << (fftt + fft) * (fftt + fft) + 2 * (fftt + fft) + 3 << endl;
}
