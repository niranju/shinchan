#include<stdio.h>
int main()
{
	int n,j,count=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("\n no");
	}
	else
	{
		printf("\n yes");
	}
	return 0;
}
