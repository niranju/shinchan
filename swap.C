#include <stdio.h>
int main()
{
double firstNumber, secondNumber, tVariable;
printf("Enter first number: ");
scanf("%lf", &firstNumber);
printf("Enter second number: ");
scanf("%lf",&secondNumber);
tVariable = firstNumber;
firstNumber = secondNumber;
secondNumber = tVariable;
printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
printf("After swapping, secondNumber = %.2lf", secondNumber);
return 0;
}
