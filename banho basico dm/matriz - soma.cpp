#include <iostream>
using namespace std;
main()
{
	int i, j, a, b;
	cout<<"numero de linhas: "; cin>>a;
	cout<<"numero de colunas: "; cin>>b;
	int x[a][b], y[a][b], z[a][b];
	cout<<"--matriz 1";
	while (i<a)
	{
		j=0;
		while (j<b)
		{
			cout<<"\n ~~coluna "<<j<<" linha "<<i<<"~~\n";
			
			cout<<"velor: "; cin>>x[i][j];
			j++;
		}
		i++;
	}
	i=0;
	cout<<"--matriz 2";
		while (i<a)
	{
		j=0;
		while (j<b)
		{
			cout<<"\n ~~coluna "<<j<<" linha "<<i<<"~~\n";
			
			cout<<"valor: "; cin>>y[i][j];
			j++;
		}
		i++;
	}
	i=0;
		while (i<a)
	{
		j=0;
		while (j<b)
		{
			z[i][j]=x[i][j]+y[i][j];
			j++;
		}
		i++;
	}
	i=0;
	cout<<"resultado: \n";
	while (i<a)
	{
	j=0;
	cout<<"\n";
	while (j<b)
	{
		cout<<z[i][j]<<" ";
		j++;
	}
	i++;
	}
}
