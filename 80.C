#include <stdio.h>

int main(void) 
{
	int a,rem,rev=0;
	printf("enter the number sequence:");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=(rev*10)+rem;
		a=a/10;
	}
	n=rev;
	while(a!=0)
	{
		rem=a%10;
		if(rem%2==1)
		{
		printf("%d ",rem);
		}
		a=a/10;
	}
	return 0;

}
