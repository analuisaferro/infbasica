#include <iostream>
using namespace std;
main()
{
    int i, a, b;
    cout<<"Numero de colunas: ";
    cin>>a;

 

    int vx[a], vy[a]; //S� � poss�vel declarar um vetor de tamanho a depois que a tiver um valor atribu�do

 

    //CUIDADO QUANDO USAR i OU a. A VARI�VEL i VARIA. A VARI�VEL a N�O MUDA DE VALOR.
        
    i=0;
    while (i<a)
    {
        cout<<"valor: ";
        cin>>vx[i];
        i++;
    }

 

    i=0;
    while (i<a)
    {
        vy[i]=vx[a-1-i];
        i++;
    }
    i=0;
    while (i<a)
    {
      cout<<"."<<vy[i]<<".";
      i++;
    }
    return 0;
}
