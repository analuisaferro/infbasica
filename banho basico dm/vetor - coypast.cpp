#include <iostream>
using namespace std;
main()
{
    int i, a;
    cout<<"Numero de colunas: ";
    cin>>a;
    i=0;
    int x[a];
    int y[a];
    while (i<a)
    {
    	cout<<"valor: ";
    	cin>>x[i];
    	i++;
	}
	i=0;
	while (i<a)
	{
		y[i]=x[i];
		i++;
	}
	i=0;
	while (i<a)
	{
	cout<<"."<<y[i]<<".";
	i++;			
	}
	return 0;
}
