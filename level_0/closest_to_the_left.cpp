#include <iostream>

using namespace std;
int	main()
{
	int		el;
	int		i;
	int		j;
	int		quer;
	int		*ele;
	int		*queri;

	cin >> el;
	cin >> quer;

	ele = (int *)malloc(sizeof(int) * el);
	queri = (int *)malloc(sizeof(int) * quer);
	i = 0;
	while (i < el)
	{
		cin >> ele[i];
		i++;
	}
	i = 0;
	while (i < quer)
	{
		cin >> queri[i];
		i++;
	}
	i = 0;
	A:while (i < quer)
	  {
		  j = 0;
		  while (j < el)
		  {
		  	if (queri[i] < ele[0])
			{
				cout << 0 << "\n";
				i++;
				goto A;
			}
			if (queri[i] >= ele[j] && queri[i] < ele[j + 1])
			{
				cout << j + 1 << "\n";
				i++;
				goto A;
			}
			j++;
		  }
		  cout << j << "\n";
		  i++;
	  }
}


