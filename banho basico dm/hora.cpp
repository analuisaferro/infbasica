#include <iostream>
#include <math.h>
using namespace std;
void horario (int min, int &hora, int &minutinhos)
{
	hora= (min/60);
	minutinhos= (min%60);
}
main()
{
	int minutos, rhora, rminutos;
	cout<<"digite os minutos passados: ";
	cin>>minutos;
	horario(minutos, rhora, rminutos);
	cout<<"a hora eh: "<<rhora<<": "<<rminutos<<".";
	return 0;
	
}
