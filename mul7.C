#include<stdio.h>
int main()
{
	int n,j;
	printf("\n enter the number:");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("\n %d is a multiple of 7",n);
	}
	else
	{
		printf("\n %d is not a multiple of 7",n);
	}
}
