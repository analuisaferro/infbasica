#include <iostream>
#include <math.h>

using namespace std;
float fparac (float f)
{
	float c;
	c=((5*(f-32.0))/9);
	return c;
}
float cparak (float tempc)
{
	float k;
	k=(tempc+273.15);
	return k;
}
float fparak (float tempf)
{
	float k, c;
	c=fparac(tempf);
	k=cparak(c);
	return k;
}	
main ()
{
	float temperaturaf, k;
	cout<<"Digite a temperatura em farenheit";
	cin>>temperaturaf;
	k=fparak(temperaturaf);
	cout<<"a temperatura em kelvin e: "<<k<<".";
}
