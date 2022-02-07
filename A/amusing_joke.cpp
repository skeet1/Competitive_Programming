#include <iostream>

using namespace std;
int main()
{
	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	int	f, l, j;
	for (int i = 65; i <= 90; i++)
	{
		f = 0;
		l = 0;
		j = -1;
		while (s1[++j])
			if (s1[j] == i)
				f++;
		j = -1;
		while (s2[++j])
			if (s2[j] == i)
				f++;
		j = -1;
		while (s3[++j])
			if (s3[j] == i)
				l++;
		if (l != f)
		{
			cout << "NO" << endl;
			return (0);
		}
	}
	cout << "YES" << endl;
}
