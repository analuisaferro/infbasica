#include <iostream>
#include <conio.h>
using namespace std;
int ver(float a, float b, float c)
{
	if (b+c<a || a+c<b || a+b<c)
	{
		return 0;
	}
	else 
	{
		if (a != b && a != c && c != b)
		{
		return 1;
		}
		else 
		{
			if (a==b && a !=c || b==c && c != a || a==c && c != b)
			{
				return 2;
			}
			else
			{
				if (a==b && b== c)
				{
					return 3;
				}
			}
		}
	}
}
main ()
{
	float a1, b1, c1, resultado;
	cout<<"digite o valor do lado a: ";
	cin>>a1;
	cout<<"digite o valor do lado b: ";
	cin>>b1;
	cout<<"digite o valor do lado c: ";
	cin>>c1;
	resultado=ver(a1, b1, c1);
	cout<<resultado<<".";
	getch();
}
