#include <stdio.h>
#include<string.h>
int main(void)
{
char a[100],p=1;
int i,flag=0,len;
scanf("%[^\n]a",a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]==' ')
p=p+1;
}
printf("%d",p);
	return 0;
}
