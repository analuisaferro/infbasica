#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
float delta(float a, float b, float c)
{
    return((pow(b, 2)) - 4 * a* c);
}
main()
{
    float valor_a, valor_b, valor_c, resultado;
    cout<<"Digite o valor de A: ";
    cin>>valor_a;
    cout<<"Digite o valor de B: ";
    cin>>valor_b;
    cout<<"digite o valor de C: ";
    cin>>valor_c;
    resultado=delta(valor_b, valor_a, valor_c);
    cout<<"O valor de delta eh: "<<resultado<<".";
    getch();
}
