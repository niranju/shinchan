#include<stdio.h>
int main()
{
int a,b;
printf("\n enter the value of a");
scanf("%d",&a);
printf("\n enter the value of b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n the swapped numbers are %d%d",&a,&b);
getch();
return 0;
}
