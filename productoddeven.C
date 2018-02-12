#include <stdio.h>
int main(void) 
{
int n,m,result;
printf("enter the number1:");
scanf("%d",&n);
printf("\nenter the number2:");
scanf("%d",&m);
result=n*m;
if(result%2==0)
{
printf("\n even");
}
else
{
printf("\n odd");
}
return 0;
}
 
