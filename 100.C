#include<stdio.h>
int main()
{
	int n,p=1,rem;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		p=p*rem;
		n=n/10;
	}
	printf("\n%d",p);
	return 0;
}
