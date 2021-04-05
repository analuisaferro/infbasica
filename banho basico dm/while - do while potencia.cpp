#include <iostream>
#include <math.h>
using namespace std;
int potpot (int base, int exposed)
{
	int resul;
	resul=pow(base, exposed);
	return resul;
	
}
main()
{
		int b, e, x;
	do
	{	
		cout<<"calculo de potencia.\n";
		cout<<"digite a base e o expoente respectivamente.\n";
		cin>> b >> e;
		cout<<"O resultado é: "<< potpot(b, e) <<".\n";
		cout<<"Deseja repetir o calculo? [0|1]";
		cin>>x;
	}
	while (x==1);
	
}

