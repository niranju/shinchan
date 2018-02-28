#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int pal=0,length,j;
	printf("\n enter the string");
	scanf("%s",&str1);
	length=strlen(str1);
	for(j=0;j<length;j++)
	{
	if(str1[j]!=str1[length-j-1])
	{
		pal=1;
		break;
	}
	}
	if(pal==1)
	{
		printf("\n no");
	}
	else
	{
		printf("\n yes");
	}
	return 0;
}
