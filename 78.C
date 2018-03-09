#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n%13==0)
{
printf("yes it is multiple of 13");
}
else
{
printf("no it is not a multiple of 13");
}
return 0;
}
