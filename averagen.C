#include<stdio.h>
void main()
{
int a,n,Sum=0,numbers;
float Average; 
printf("\nPlease Enter How many Number you want?\n");
scanf("%d",&n);
printf("\nPlease Enter the elements one by one\n");
for(a=0;a<n;++a)
{
scanf("%d",&numbers);
Sum = Sum +numbers;
}
Average = Sum/n;
printf("\nSum of the %d Numbers = %d",n, Sum);
printf("\nAverage of the %d Numbers = %.2f",n, Average); 
return 0;
}
