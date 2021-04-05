#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
float imc (float peso, float altura)
{
	float resultado;
	resultado=(peso/pow(altura,2));
	
	if (resultado < 25)
	return 0;
	else
	{
		if (resultado >= 22 && resultado < 30)
		return 1;
		else
		{
			if (resultado >= 30 && resultado < 35)
			return 2;
			else
			{
				if (resultado >= 35 && resultado < 40)
				return 3;
				else
				{
					if (resultado >= 40)
					return 4;
				}
			}
		}
	}
}
main ()
{
	float pes, alt, res;
	cout<<"digite o peso: ";
	cin>>pes;
	cout<<"digite a altura: ";
	cin>>alt;
	res=imc(pes, alt);
	cout<<res<<".";
	getch();
}
