#include <iostream>
using namespace std;
int main() 
{
char str[100];
int j;
cin.getline(str,100);
for(j=0;str[j]!=0;j++)
{
cout<<str[j]<<" ";
}
return 0;
}
