#include<stdio.h>
int main()
{
	int n,l,h,j,flag=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the range:");
	scanf("%d %d",&l,&h);
	for(j=l;j<h;j++)
	{
		if(n==j)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
