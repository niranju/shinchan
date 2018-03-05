#include <stdio.h>
int main() 
{
	float p,r,total;
	int si,t;
	printf("\n enter the principal amount p,time t,rate r");
	scanf("%f %d %f",&p,&t,&r);
	result=((p*t*r)/100);
	si=floor(total);
	printf("\nfloor value is %d",si);
	return 0;
}
