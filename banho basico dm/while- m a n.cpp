#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int m, n;
	cout<<"digite o valor de m \n";
	cin>>
	m ;
	cout<<"digite o valor de n \n";
	cin>>n;
	while (m>=n)
	{
		cout<< m <<"\n";
		m=m-1;
	}
	while (n>=m)
	{
		cout<<n<<"\n";
		n=n-1;
		getch();
	}
}
