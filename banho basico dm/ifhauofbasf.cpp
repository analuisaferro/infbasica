#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int ab, x[ab], y[ab], i, p;
	
	cout << "Digite a quantidade de numeros que deseja: ";
	cin >> ab;
	i=1;
	p = ab;
	
	while (i < p)
	{
		cout << "Digite um numero: ";
		cin >> x[i];
		i++;
	}
	
	i=1;
	while (i < p)
	{
		cout << "teste " << x[i] << "; ";
		i++;
	}
getch();
}
