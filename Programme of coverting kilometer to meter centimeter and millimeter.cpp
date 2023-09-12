/*a c programme coverting kilometer to meter centimeter and millimeter*/
#include<stdio.h>
int main ()
{
	float a,b,c,d;
	printf ("enter the value in kilometer");
	scanf ("%f",&a);
	b=1000*a;
	c=100000*a;
	d=1000000*a;
	printf ("the value in meter is %.2f",b);
	printf ("the value in centimeter is %.2f",c);
	printf ("the value in millimeter is %.2f",d);
	
}
