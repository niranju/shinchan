#include<stdio.h>
int main()
{
char b[10];
int i;
printf("\n enter the string:");
scanf("%s",b);
for(i=0;i<10;i++)
{
 if(b[i]=='b'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='B'||b[i]=='I'||b[i]=='O'||b[i]=='E'||b[i]=='U')
 {
 printf("\n yes");
 return 0;
 }
}
printf("\n no");
return 0;
}
