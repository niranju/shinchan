#include<stdio.h>
int main()
{
int a,count=0,i;
printf("enter value of a");
scanf("%d",&a);
for(i=1;i<a;i++)
{
count++;
}
printf("\nvalue count is \n%d",count);
return 0;
}
