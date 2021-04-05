//Ana Luísa Pereira Ferro
#include <iostream>
using namespace std;
int seq (int pos)
{
	float a, soma, num1, num2, n, i;
	num1=0;
	num2=1;
	soma=0;
	n=1;
	if (pos==0)
	{
		cout<<"erro: a sequencia deve comecar do numero 1.";
	}
	i=0;
	while (pos>n )
	{
	soma=num1+num2;
	num1=num2;
	num2=soma;
	n=n+1;
	}
	return num2;
	}
main()
{
	int i, aux, x[40], valor;
	float aurea;
	i=1;
	aux=1;
	cout<<"razao aurea: \n";
	while(i<=40)
	{
		x[i]=seq(aux);
		aux++;
		i++;
	}
	i=1;
	while (i<=40)
	{
		aurea=1.0*x[i+1] / x[i];
		cout<<x[i+1]<<"/"<<x[i]<<"="<<aurea<<". \n";
		i++;
	}
}
