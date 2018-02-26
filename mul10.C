#include<stdio.h>
int main()
{
	int num,a,multi=0,i;
	printf("\n enter the number:");
	scanf("%d",&num);
	a=num;
	for(i=num;multi=1;i++)
	{
		if(i%10==0)
		{
		multi=1;
		break;
		}
	}
	if(multi==1)
	{
		printf("\n the nearest multiple of %d is %d ",a,i);
		return 0;
	}
}
