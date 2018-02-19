#include <stdio.h>
int main()
{
    char str[100],count;
    int j;
    printf("Enter any string : ");
    scanf("%s",&str);
    for(j=0;str[j]!='\0';j++)
    {
        if((str[j]>='a' && str[j]<='z') || (str[j]>='0' && str[j]<='9'))
        {
         count=1;
        }
        else 
        {
        	count=2;
        }
    }
    if(count==1)
       {
       	printf("\n yes");
       }
     else
       {
       	printf("\n no");
       }
       return 0;
}


