
#include <iostream>
using namespace std;
main()
{
	int c, l, soma;
	int mat[4][4];
	l=0;
		while (l<4)
	{
		c=0;
		while (c<4)
		{
			cout<<"~~linha "<<l<<" coluna "<<c<<"~~ \n";
			cout<<"valor: "; cin>>mat[l][c];
			c++;
		}
		l++;
	}
	l=0;
	c=0;
	while (l<4)
	{
		c=0;
		while (c<4)
		{
			if(c<l && c<=2 && l<=3)
			{
				soma=soma+mat[l][c];
			}	
			c++;
		}
		l++;
	}
	cout<<"\n resultado: "<<soma<<".";
}
