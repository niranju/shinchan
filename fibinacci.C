#include<stdio.h>
int fib(int a)
{
if (a<= 1)
return a;
return fib(a-1) + fib(a-2);
}
int main ()
{
int a = 9;
printf("%d", fib(a));
getchar();
return 0;
}
