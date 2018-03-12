#include <stdio.h>
int main() 
{
int a,b,rem,gcd;
printf("\n enter the two numbers:");
scanf("%d%d",&a,&b);
do
{
rem=a%b;
if(rem==0)
{
break;
}
a=b;
b=rem;
}while(rem!=0);
gcd=b;
printf("\n the gcd is: %d",gcd);
return 0;
}
