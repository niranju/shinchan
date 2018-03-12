#include<stdio.h>
int main()
{
	int a,b,c,d;
	int lcm,gcd,rem;
	printf("\n enter the two numbers:");
	scanf("%d%d",&a,&b);
	c=a;
	d=b;
	do
	{
		rem=a%b;
		if(rem==0)
		{
			break;
		}
		a=b;
		b=rem;
	}while(rem!=0);
	gcd=b;
	lcm=(c*d)/gcd;
	printf("\n lcm of given in put is:%d",lcm);
	return 0;
}
