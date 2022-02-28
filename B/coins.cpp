#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<string>t(3);
	for (int i = 0; i < 3; i++)
		cin >> t[i];
	for (int i = 0; i < 3; i++)
	{
		if (t[i][1] == '>')
		{
			int temp = t[i][0];
			t[i][0] = t[i][2];
			t[i][2] = temp;
		}
	}
	if (((t[0][0] != t[1][0]) && (t[0][0] != t[2][0])) && t[1][0] != t[2][0])
	{
		cout << "Impossible" << '\n';
		return (0);
	}
	int a = 0, b= 0, c = 0;
	for (int i = 0; i < 3; i++)
	{
		if (t[i][0] == 'A')
			a++;
		else if (t[i][0] == 'B')
			b++;
		else
			c++;
	}
	if (a == 2)
	{
		cout << 'A';
		if (b == 1)
			cout << "BC";
		else
			cout << "CB";
	}
	if (b == 2)
	{
		cout << 'B';
		if (a == 1)
			cout << "AC";
		else
			cout << "CA";
	}
	if (c == 2)
	{
		cout << 'C';
		if (a == 1)
			cout << "AB";
		else
			cout << "BA";
	}
}
