#include <iostream>
using namespace std;
int multiplicasenhor(int x[], int a)
{
	int i;
	i=0;
	while (i<a)
	{
		x[i]=x[i]*a;
		i++;
	}
	i=0;
	cout<<"resultado:";
	while (i<a)
	{
		cout<<x[i]<<" ";
		i++;
	}
}
main()
{
	int c, i;
	cout<<"numero de colunas: "; cin>>c;
	int y[c];
	while (i<c)
	{
		cout<<"valor: "; cin>>y[i];
		i++;
	}
	cout<<" "<<multiplicasenhor(y,c);".";
}
