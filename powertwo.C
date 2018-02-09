#include <stdio.h>
int main()
{
int n;
int tempNum,flag;
printf("Enter an integer number: ");
scanf("%d",&n);
tempNum=n;
flag=0;
while(tempNum!=1)
{
if(tempNum%2!=0)
{
flag=1;
break;
}
tempNum=tempNum/2;
}
if(flag==0)
printf("%d is a number that is the power of 2.",n);
else
printf("%d is not the power of 2.",n);
return 0;
}
