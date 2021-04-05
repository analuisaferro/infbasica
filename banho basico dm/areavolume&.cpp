#include <iostream>
#include <math.h>
using namespace std;
void * areavol(float c, float lar, float p, float &vol, float &a)
{
	vol=p*c*lar;
	a=c*lar;
}
main()
{
	float comp, larg, prof, volume, area;
	cout<<"Digite o comprimento da piscina: \n";
	cin>>comp;
	cout<<"digite a largura: \n";
	cin>>larg;
	cout<<"digite a profundidade: \n";
	cin>>prof;
	areavol(comp, larg, prof, volume, area);
	cout<<"o valor do volume e area repectivamente sao "<<volume<<" e "<<area<<".";
	return 0;
}
