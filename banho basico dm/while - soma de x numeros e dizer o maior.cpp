#include <iostream>
using namespace std;
main ()
{
	int qntd, n, soma, ins, maior;
	maior=0;
	soma=0;
	n=1;
	cout<<"escreva a quantidade de numeros que ira ser somada :";
	cin>>qntd;
	while (qntd>=n)
	{
		cout<<"valor: ";
		cin>>ins;
		soma= ins + soma;
		n=n+1;
		
		if (ins > maior)
		{
			maior=ins;
		}
	}
	cout<<"Soma final: "<<soma<<" Maior número: "<<maior<<".";
}
