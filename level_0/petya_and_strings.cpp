#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	string s1; cin >> s1;
	string s2; cin >> s2;
	for (int i = 0; i < s1.length(); i++)
		s1[i] = tolower(s1[i]);
	for (int i = 0; i < s2.length(); i++)
		s2[i] = tolower(s2[i]);
	int r = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		r = s1[i] - s2[i];
		if (r != 0)
			goto B;
	}
B:	if (r < 0)
		r = -1;
	if (r > 0)
		r = 1;
 	cout << r << endl;	
}
