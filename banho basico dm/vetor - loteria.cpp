#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	int p, c, i;
	int const a=13;
	int g[a];
	int r[a];
	i=0;
	c=2;
	while (i<a)
	{
		g[i]=c;
		c=c+2;
		i++;
	}
	i=0;
	while (i<a)
	{
		cout<<"digite os valores do cartao resposta: "; cin>>r[i];
		i++;
	}
	i=0;
	while (g[i]==r[i] && i<13)
	{
		i++;
		p++;
	}
	if (p==13)
	{
		cout<<"ganhou bro";
	}
	if (p<13)
	{
		cout<<"perdeu moh.";
	}
}
