/*a c programme to swap 2 numbers*/
#include <stdio.h>
int main ()
{
	double a,b;
	printf ("enter the first number");
	scanf ("%lf",&a);
    printf ("enter the second number");
	scanf ("%lf",&b);
	a=a-b;
	b=a+b;
	a=b-a;	
	printf ("after swaping the first number is %.2lf",a);
	printf ("after swapping the second number is %.2lf",b);
	
}
