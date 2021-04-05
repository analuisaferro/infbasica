#include <iostream>
using namespace std;
main()
{
	int a, i , j, m, aux, v;
	cout<<"Digite a quantidade de numeros naturais: ";
	cin>>a;
	int y[a];
	j=0;
	while (j<a)
	{
		cout<<"forneca o "<<j<<"o. numero natural: "; cin>>y[j];
		if (0<y[j])
		{
		j++;
		}
	}
	aux=0;
	while (aux<a)
	{
		aux=m*m;
		m++;
	}
	m=m-1;
	cout<<m<<"\n";
	int x[m][m];
	i=0;
	v=0;
	while (i<m)
	{
		j=0;
		while (j<m)
		{
			if (0<=y[v])
			{
				x[i][j]=y[v];
				cout<<"matriz["<<i<<"]["<<j<<"]: "<<x[i][j]<<" \n";
			}

			j++;
			v++;
			if (v==a)
			{
				v=0;
			}
		}
		i++;

	}
}
