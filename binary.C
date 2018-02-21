#include<stdio.h>
int i,count;
int b[100];
printf("\n enter the number");
for(i=0;i<=100;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=100;i++)
{
if(b[i]==0||b[i]==1)
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
