#include <iostream>

using namespace std;
int main()
{
	string s1, s2; cin >> s1 >> s2;
	int j = 0;
	for (int i = 0; i < s2.length(); i++)
	{
		for (; j < s1.length(); )
		{
			if (s2[i] == s1[j])
			{
				i++;
				j++;
			}
			else
				break;
		}
	}
	cout << j+1 << endl;
}
