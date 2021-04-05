#include <iostream>
#include <math.h>
using namespace std;
void * mais(float nx, float dx, float ny, float dy, float &r) //ADIÇÃO
{
	r=((nx*dy)+(ny*dx))/(dx*dy);
	
}
void * menos (float nux, float dex, float nuy, float dey, float &re) //SUBTRAÇÃO

{
re=((nux*dey)-(nuy*dex))/(dex*dey);

}
void * multiplicar (float numx, float denx, float numy, float deny, float &res) //MULTIPLICAR
{
res=(numx*numy)/(denx*deny);

}
void * dividir (float numex,float denox, float numey, float denoy, float &resu)
{
	resu=(numex*denoy)/(denox*numex);
}
main()
{
	float numerx, denomx, numery, denomy, resultado1, resultado2, resultado3, resultado4;
	
	cout<<"insira o numerador de x: ";
	cin>>numerx;
	cout<<"insira o denominador de x: ";
	cin>>denomx;
	cout<<"insira o numerador de y: ";
	cin>>numery;
	cout<<"insira o denominador de y: ";
	cin>>denomy;
	
	mais(numerx, denomx, numery, denomy, resultado1);
	menos(numerx, denomx, numery, denomy, resultado2);
	multiplicar(numerx, denomx, numery, denomy, resultado3);
	dividir(numerx, denomx, numery, denomy, resultado4);
	
	cout<<"os resultados sao:\n" " adicao: "<<resultado1<<" subtracao: "<<resultado2<<" multiplicacao: "<<resultado3<<" divisao: "<<resultado4<<".";
	return 0;

}
