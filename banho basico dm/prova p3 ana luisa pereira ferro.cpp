#include <iostream>
#include <conio.h>
using namespace std;
// Professor, não consegui realizar a prova.
int quantidadeDeDigitosDeUmInteiro (int n)
{
	int i, r=0;
	if(n==0) return 1;
	else while (n !=0)
	{
		n=n/10;
		r=r+1;
	}
	return r;
}
int digitoDeUmInteiro (int n, int pos)
{
	int i, digito, tam;
	tam=quantidadeDeDigitosDeUmInteiro (n);
	if (pos>=tam) return -1;
	else
	{
		for (i=0; i<=pos; i++)
		{
			digito = n%10;
			n=n/10;
		}
		return digito;
	}
	
}
int espelho (int nu)
{
	int dig, posi, n, resultado1, resultado2;
	posi=0;
	n=0;
	if(quantidadeDeDigitosDeUmInteiro(nu)==2)
	{
		while (posi<1)
		{
			resultado1=digitoDeUmInteiro(nu, posi);
			posi=posi+1;
			
		}
		while (posi<2)
		{
			resultado2=digitoDeUmInteiro(nu, posi);
			posi=posi+1;
		}
		if(resultado1==resultado2)
		{
			cout<<"o numero de dois digitos inserido e espelhado";
		}
	}
	
	}
	main()
{
	
}



