#include<stdio.h>
int main()
{
int n,k,p=1,j;
printf("\n enter the value of base:");
scanf("%d",&n);
printf("\n enter the value of power:");
scanf("%d",&k);
for(j=0;j<k;j++)
{
p=n*p;
}
printf("\n the output:%d",p);
return 0;
}
