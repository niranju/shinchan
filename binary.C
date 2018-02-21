#include<stdio.h>
int i,count;
int a[100];
printf("\n enter the number");
for(i=0;i<=100;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=100;i++)
{
if(a[i]==0||a[i]==1)
{
count=1;
}
else {
printf("no");
}
}
if(count==0)
{
printf("yes");
}
return 0;
}
