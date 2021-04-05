#include <iostream>
using namespace std;
bool digito(char carac)
{

	return (carac >= '0' && carac <= '9' );
}

bool letra(char carac)
{
	return ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z' ));
}

bool digitoPar(char carac)
{
	return (carac == '0' || carac == '2' || carac == '4' || carac == '6' || carac == '8' );
}

bool vogal(char carac)
{
	return (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' || carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U' );
}

bool maiuscula(char carac)
{
	return (carac >= 'A' && carac <= 'Z' );
}
main()
{
	char carac;
	
	cout<<"forneca um caractere: ";
	cin>>carac;
	
	if (letra(carac))
	{
		if(vogal(carac))
		{
			if (maiuscula(carac))
			{
				cout<<"O caractere fornecido e vogal maiuscula.";
			}
			else 
			{
			cout<<"O caractere fornecido e vogal e minuscula.";
			}
		}
		else
		{
			if (maiuscula(carac))
			{
				cout<<"O caractere fornecido e consoante maiuscula.";
			}
			else
			{
				cout<<"O caractere fornecido e consoante minuscula.";
			}
		}
	}
	
	else
	{
		if (digito(carac))
		{
			if (digitoPar(carac))
			{
				cout<<"O caractere fornecido e digito par.";
			}
			else
			{
				cout<<"O caractere fornecido e digito impar.";
			}
		}
		else
		{
			cout<<"O caractere fornecido nao e nem letra, nem digito.";
		}
}
}
