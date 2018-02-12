# include<stdio.h>
int getSum(int a)
{ 
int sum = 0;
while (a!= 0)
{
sum = sum + a % 10;
a= a/10;
}
return sum;
} 
int main()
{
int a = 687;
printf(" %d ", getSum(a);
return 0;
}
