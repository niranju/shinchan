#include <stdio.h>
int main()
{
    int n, originalNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    originalNumber = n;
    while (originalNumber != 0)
    {
    remainder = originalNumber%10;
    result += remainder*remainder*remainder;
    originalNumber /= 10;
    }
    if(result == number)
    printf("%d is an Armstrong number.",n);
    else
    printf("%d is not an Armstrong number.",n);
    return 0;
}
