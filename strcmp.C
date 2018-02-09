#include<stdio.h>
#include<string.h>
int main()
{
char k[100], b[100];    
printf("Enter the first string\n");    
gets(k);    
printf("Enter the second string\n");    
gets(b);    
if( strcmp(k,b) == 0 )
printf("Entered strings are equal.\n");
else
printf("Entered strings are not equal.\n");
return 0;
}
