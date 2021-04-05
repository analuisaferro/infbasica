#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	int i, a, b, c;
	cout<<"tamanho dos vetores: "; cin>>a;
	int x[a];
	int y[a];
	int z[a+a];
	cout<<"\n ~~~~vetor 1~~~~";
	i=0;
	while (i<a)
	{
		cout<<"\n valor: "; cin>>x[i];
		i++;
	}
	cout<<"\n ~~~~vetor 2~~~~";
	i=0;
	while (i<a)
	{
		cout<<"\n valor: "; cin>>y[i];
		i++;
	}
	i=1;
	c=0;
	while (c<a)
	{
		
		z[i]=y[c];
		i=i+2;
		c++;
	}
	i=0;
	c=0;
	while (c<a)
	{
		z[i]=x[c];
		i=i+2;
		c++;
		
	}
	cout<<"\n a intercalacao dos elementos: \n";
	i=0;
	while (i<a+a)
	{
		cout<<z[i]<<". ";
		i++;
	}
	getch();
	
}
