#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int l;
	printf("\n enter the string");
	scanf("%s",&str);
	l=strlen(str);
	if(l%2==0)
	{
		str[l/2]='*';
		str[l/2-1]='*';
	}
	else
	{
		str[l/2]='*';
	}
	printf("\n%s",str);
	return 0;
}
