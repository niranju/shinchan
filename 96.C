#include<stdio.h>
int main()
{
	int n,j,flag=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(j=2;j<n/2;j++)
	{
		if(n%j==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes,it is composite");
	}
	else
	{
		printf("\n no,it is not composite");
	}
	return 0;
}
