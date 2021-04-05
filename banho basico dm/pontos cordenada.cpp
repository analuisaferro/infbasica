#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
float contadistancia (float xa, float ya, float xb, float yb)
{
	return sqrt((pow(xa-xb,2.0)+(pow(ya-yb,2.0))));
}
main()
{
	float resultado, xa2, ya2, xb2, yb2;
	cout<<"Digite o valor de Xa: ";
	cin>>xa2;
	cout<<"Digite o valor de Ya: ";
	cin>>ya2;
	cout<<"Digite o valor de Xb: ";
	cin>>xb2;
	cout<<"Digite o valor de Yb: ";
	cin>>yb2;
	resultado=contadistancia(xa2,ya2,xb2,yb2); //pfv vai eu nao aguento mais
	cout<<"A distancia dos pontos eh: "<<resultado<<".";
	getch();
}
