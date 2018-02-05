#include<iostream>
using namespace std;
int countSort(int arr[], int a, int exp)
{
int output[a]; 
int i, count[a] ;
for (int i=0; i < a; i++)
count[i] = 0;
for (i = 0; i < a; i++)
count[ (arr[i]/exp)%n ]++;
for (i = 1; i < a; i++)
count[i] += count[i - 1];
for (i = a- 1; i >= 0; i--)
{
output[count[ (arr[i]/exp)%a] - 1] = arr[i];
count[(arr[i]/exp)%a]--;
}
for (i = 0; i < a; i++)
arr[i] = output[i];
}
void sort(int arr[], int a)
{
countSort(arr, a, 1);
countSort(arr, a, a);
}
void printArr(int arr[], int a)
{
for (int i = 0; i < a; i++)
cout << arr[i] << " ";
}
int main()
{
int arr[] = {40, 12, 45, 32, 33, 1, 22};
int a = sizeof(arr)/sizeof(arr[0]);
cout << "Given array is a";
printArr(arr, a);
sort(arr, a);
cout << "nSorted array is a";
printArr(arr, a);
return 0;
}
