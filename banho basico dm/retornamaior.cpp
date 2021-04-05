#include <iostream>
using namespace std;
main()
{
	int i, a, maior, aux;
	cout<<"digite o numero de colunas"; cin>>a;
	i=0;
	int x[a];
    while (i<a)
    {
    	cout<<"valor: ";
    	cin>>x[i];
    	i++;
	}
	i=0;
	while (i<a)
	{
		if(x[i-1]<x[1])
		{
			maior=x[i];
		}
		i++;
	}
	cout<<"o maior valor e: "<<maior;
}
