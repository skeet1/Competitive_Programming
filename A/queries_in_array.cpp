#include <iostream>

using namespace std;
int		main()
{
	int		i;
	int		j;
	int		nb_el;
	int		nb_queries;
	int		arr[100000];
	int		quer[100000];

	cin >> nb_el;
	cin >> nb_queries;
	i = 0;
	while (i < nb_el)
	{
		cin >> arr[i];
		i++;
	}
	i = 0;
	while (i < nb_queries)
	{
		cin >> quer[i];
		i++;
	}
	i = 0;
	A : while (i < nb_queries)
	{
		j = 0;
		while (j < nb_el)
		{
			if (quer[i] == arr[j])
			{
				cout << "YES\n";
				i++;
				goto A;
			}
			j++;
		}
		cout << "NO\n";
		if (quer[i] < arr[j])
		{
			i++;
			goto A;
		}
		i++;
	}
}

