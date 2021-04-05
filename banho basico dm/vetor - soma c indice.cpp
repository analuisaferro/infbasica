#include <iostream>
using namespace std;
int multiplicasenhor(int x[], int a)
{
	int i;
	while (i<a)
	{
		x[i]=x[i]*a;
		i++;
	}
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
	multiplicasenhor(y,c);
}
