#include <iostream>
using namespace std;
main()
{ 
int x, y, z, n, maior, h;

cout << "Quantidade de numeros que serao somados: \n";
cin >> x;
n = 1;
y=0;
maior=0;
do
{
	cout << "Valor: ";
	cin >> h;
	y= y + h;
	n= n+1;	
if(h > maior)
{
maior = h;
}

}

while(n<=x);
{
}
 cout << "soma: " << y << " maior: " << maior;
return 0;
}
