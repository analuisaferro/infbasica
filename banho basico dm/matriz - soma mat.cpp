#include <iostream>
using namespace std;
main()
{
	int i, j, r;
	int mat[2][3];
	
	while (i<2)
	{
		j=0;
		while (j<3)
		{
			cout<<"~~linha "<<i<<" coluna "<<j<<"~~ \n";
			cout<<"valor: "; cin>>mat[i][j];
			j++;
		}
		i++;
	}
	i=0;
	r=0;
	while (i<2)
	{
		j=0;
		while (j<3)
		{
			r=r+mat[i][j];
			j++;
		}
		i++;
	}
	cout<<"\n \n resultado: "<<r<<".";
}
