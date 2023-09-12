/*a c programme swaping two numbers without using third variable*/
#include <stdio.h>
int main ()
{
	double a,b,x;
	printf ("enter the first number");
	scanf ("%lf",&a);
	printf ("enter the second number");
	scanf ("%lf",&b);
	x=a;
	a=b;
	b=x;
	printf ("after swaping the first number is %.2lf",a);
	printf ("after swaping the second number is %.2lf",b);
	
	
	
}
