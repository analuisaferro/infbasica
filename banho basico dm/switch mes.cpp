#include <iostream>
#include <conio.h>
using namespace std;
int nome(int mes)
{
	switch (mes)
	{
		case 1: cout<<"janeiro";
				break;
		case 2: cout<<"fevereiro";
				break;
		case 3: cout<<"marco";
				break;
		case 4: cout<<"abril";
				break;
		case 5: cout<<"maio";
				break;
		case 6: cout<<"junho";
				break;
		case 7: cout<<"julho";
				break;
		case 8: cout<<"agosto";
				break;
		case 9: cout<<"setembro";
				break;
		case 10:cout<<"outubro";
				break;
		case 11:cout<<"novembro";
				break;
		case 12:cout<<"dezembro";
				break;
		default: return 0;
	}
}
main()
{
	int memes;
	cout<<"forneca o numero que corresponde o ano: ";
	cin>>memes;
	nome(memes);
}
