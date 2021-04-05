#include <iostream>
#include <math.h>
using namespace std;
float ConvFParaC (float TF)
{
    float celsius;
    celsius=((5*(TF-32.0))/9);
    return celsius;
}
float ConvCParaK (float TC)
{
    float temperaturaK;
    temperaturaK=(TC+273.15);
    return temperaturaK;
}
float ConvFparaK (float TempF)
{
    float temperaturaK, C, F;
    C=ConvFParaC(F);
    temperaturaK=ConvCParaK(C);
    return temperaturaK;
}
main()
{
    float temperaturaF, temperaturaK;
    cout<<"Digite a temperatura em Fahrenheit que deseja converter para Kelvin: ";
    cin>>temperaturaF;
    temperaturaK=ConvFparaK(temperaturaF);
    cout<<"A conversao eh: "<<temperaturaK<<".";

}

