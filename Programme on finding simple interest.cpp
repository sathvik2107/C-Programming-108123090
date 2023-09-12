/*programme for fiding simple intererst*/
#include <stdio.h>
int main ()
{
	int p,r,t;
	float i;
	printf ("enter the value of principal,rate,time");
	scanf ("%d%d%d",&p,&r,&t);
	i=p*r*t/100;
	printf ("the simple interest is %f",i);
	
}
