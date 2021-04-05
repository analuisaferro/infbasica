#include <iostream>
using namespace std;
void va(float &num)
{
	float aux;
	aux=(num*-2)/2;
	num=aux;
	
}
main()
{
	float x;
	cout<<"numero para valor absoluto: ";
	cin>> x;
	va(x);
	cout<<"valor absoluto: "<<x<<".";
}
