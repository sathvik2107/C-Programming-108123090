/*a c programme on finding the percentage of a student given the marks of 5 subjects*/
#include <stdio.h>
int main ()
{
	int math,phy,chem,bio,comp;
	float percentage;
	printf ("enter the marks of the subjects");
	scanf ("%d%d%d%d%d",&math,&phy,&chem,&bio,&comp);
	percentage=(math+phy+chem+bio+comp)/5;
	printf ("the percentage is %0.2f",percentage);
	
}
