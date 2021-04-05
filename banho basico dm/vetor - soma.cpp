#include <iostream>
using namespace std;
main()
{
	int i, a, b, c;
	cout<<"Numero de colunas dos dois numeros: "; cin>> a;
	int x[a];
	int y[a];
	int z[a];
	cout<<"Voce ira digitar os valores do numero 1.\n \n";
	i=0;
	while (i<a)
	{
		cout<<"valor: "; cin>>x[i];
		i++;
	}
	cout<<"Voce ira digitar os valores do numero 2.\n";
	i=0;
	while (i<a)
	{
		cout<<"valor: "; cin>>y[i];
		i++;
	}
	i=0;
	while (i<a)
	{
		z[i]= x[i] + y[i];
		i++;
	}
	i=0;
	cout<<" \n";
	while (i<a)
	{
		cout<<z[i]<<" ";
		i++;
	}
	return 0;
}
