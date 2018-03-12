#include<stdio.h>
int main()
{
int a[10],b,n,i,j;
printf("\n enter the number:");
scanf("%d",&n);
printf("\n enter the total number of values:");
scanf("%d",&b);
printf("\n enter the value:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<b;j++)
{ n=n-1;
 printf("\n %d",a[n]);
 }
 return 0;
 }
