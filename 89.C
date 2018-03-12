#include<stdio.h>
#include<string.h>
int main()
{
int b,i,j,temp;
char a[20];
printf("enter string:");
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%s",a);
return 0;
}
