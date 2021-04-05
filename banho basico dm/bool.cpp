#include <iostream>
#include <math.h>

using namespace std;
bool vogal(char carac)
{
	return(carac=='a'|| carac=='e'|| carac=='i' || carac== 'o' || carac== 'u');
}
main()
{
	char teste, caractere;
	cout<<"vai ";
	cin>>teste;
	caractere=vogal(teste);
	cout<<"eh isto "<<caractere<<".";
}
