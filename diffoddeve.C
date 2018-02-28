#include <stdio.h>
int main()
{
	int i,j;
	printf("enter the numbers\n");
	scanf("%d %d ",&i,&j);
	i=i-j;
	if(i%2==0)
	{
printf("even",i);
}
else
printf("odd",i);
return 0;
}
