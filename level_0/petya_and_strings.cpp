#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	int res;
	char s1[100];
	char	s2[100];
	cin.getline (s1, 100);
	cin.getline (s2, 100);
	res = 32;
	int i = 0;
	while (res == 32 && (s1[i] || s2[i]))
	{
		res = strcmp(s1+i, s2+i);
		i++;
	}
	if (res == 0 || abs(res) == 32)
		cout << 0;
	else if (res > 0)
		cout << 1;
	else
		cout << -1;
}
