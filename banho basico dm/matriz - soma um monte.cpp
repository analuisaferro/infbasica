#include <iostream>
using namespace std;
main()
{
	int ad1, ad2, ad3, ad4, ad5, ad6, i, j;
	int m[5][5];
	i=0;
	while (i<5)
	{
		j=0;
		while (j<5)
		{
			cout<<"~~linha "<<i<<". coluna "<<j<<"."; cin>>m[i][j];
			j++;
		}
		i++;
	}
	i=0;
	while (i<5)
	{
		j=0;
		{
			while (j<5)
			{
				if(i==4)
				{
					ad1=ad1+m[i][j];
				}
				if(j==2)
				{
					ad2=ad2+m[i][j];
				}
				if(i==j)
				{
					ad3=ad3+m[i][j];
				}
				if(j==4 && i==0 || j==3 && i==1 || j==2 && i==2 || j==1 && i==3 || j==0 && i==4)
				{
					ad4=ad4+m[i][j];
				}
				ad5=ad5+m[i][j];
				j++;
			}
		}
		i++;
	 } 
	 i=0;
	 cout<<"matriz: \n ";
	 while (i<5)
	 {
	 	j=0;
	 	while (j<5)
	 	{
	 		cout<<"\n"<<m[i][j]<<" ";
	 		j++;
		}
	 	i++;
	  } 
	  cout<<"\n ~soma linha 4: "<<ad1<<". \n ~soma da coluna 2: "<<ad2<<". \n ~soma diagonal principal: "<<ad3<<". \n ~soma diagonal secundaria: "<<ad4<<". \n ~soma de todos os elementos: "<<ad5<<".";
	
}
