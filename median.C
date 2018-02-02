#include <stdio.h>
int getMedian(int ar1[], int ar2[], int n)
{
    int a = 0;  
    int b= 0; 
    int count;
    int m1 = -1, m2 = -1;
    for (count = 0; count <= n; count++)
    {
    if (a == n)
    {
    m1 = m2;
    m2 = ar2[0];
    break;
    }
    else if (b == n)
    {
    m1 = m2;
    m2 = ar1[0];
    break;
    }
    if (ar1[a] < ar2[b])
    {
    m1 = m2;
    m2 = ar1[a];
    a++;
    }
    else
    {
    m1 = m2;  
    m2 = ar2[b];
    b++;
    }
    }
    return (m1 + m2)/2;
    }
 
