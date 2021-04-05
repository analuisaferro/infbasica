#include <iostream>
#include <math.h>
using namespace std;
void maiormenor(int nu1, int nu2)
{
	if (nu1%nu2 == 0)
	{
		cout<<nu1<<" e divisivel por "<<nu2<<".";
	}
	else
	{
		cout<<nu1<<" nao e divisivel por "<<nu2<<".";
}

}

main()
{

	int num1, num2;
	cout<<"forneça um numero: ";
	cin>>num1;
	cout<<"mais um: ";
	cin>>num2;
	maiormenor(num1, num2);
	if (num1%2 ==0)
	{
		cout<<num1<< " e par.";
	}
	if (num1%2 !=0)
	{
		cout<<num2<< " e impar. ";
	}
		if (num2%2 ==0)
	{
		cout<<num2<< " e par.";
	}
	if (num2%2 !=0)
	{
		cout<<num2<< " e impar. ";
	}
	return 0;

}
