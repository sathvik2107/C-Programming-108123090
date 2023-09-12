/*a c programme to find cube root of a number */
#include <stdio.h>
#include <math.h>
int main ()
{
	double a,cuberoot;
	printf ("enter the value");
	scanf ("%lf",&a);
	cuberoot=cbrt(a);
	printf ("the cuberoot of %.2lf is %.2lf",a,cuberoot);
	
}
