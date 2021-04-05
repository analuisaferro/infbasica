#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int m, n;
	cout<<"contagem de numeros pares de M a N.";
	cout<<"digite valor para hugo";
	cin>>m;
	cout<<"digite valor para n";
	cin>>n;
	while (m>=n)
	{
		cout<<m <<"\n";
		m=m-2;
	}
	while (n>=m)
	{
		cout<<n<<"\n";
		n=n-2;
	}
	getch();
}
