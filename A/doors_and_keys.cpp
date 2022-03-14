#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int t; cin >> t;
	a:while (t--)
	  {
		  string s; cin >> s;
		 int i = 0, j = 0;
		 while (s[i])
		 {
			 j = 0;
			 int yes = 0;
			 if (s[i] >= 65 && s[i] <= 90)
			 {
				 while (j < i)
				 {
					 if (s[j] == s[i] + 32)
						 yes = 1;
					 j++;
				 }
				 if (yes == 0)
				 {
					 cout << "NO" << endl;
					 goto a;
				 }
			 }
		 i++;	 
		 }
		 cout << "YES" << endl;
	  }
}

