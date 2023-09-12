/*a c programme to find the sqaure root of a number*/
#include <stdio.h>
#include <math.h>
int main ()
{
	double a,squareroot;
	printf ("enter a number");
	scanf ("%lf",&a);
	squareroot=sqrt(a);
	printf ("the sqaureroot of %.2lf is %.2lf",a,squareroot);
	
	
}
