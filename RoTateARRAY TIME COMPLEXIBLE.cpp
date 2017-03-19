#include<bits/stdc++.h>
using namespace std;
  
void leftRotatebyOne(long long arr[], long long n)
{
  long i, temp;
  temp = arr[0];
  for (i = 0; i < n-1; i++)
     arr[i] = arr[i+1];
  arr[i] = temp;
}
 void leftRotate(long long arr[], long long d, long long n)
{
  long i;
  for (i = 0; i < d; i++)
    leftRotatebyOne(arr, n);
}

void printArray(long long arr[], long long size)
{
  long i;
  for(i = 0; i < size; i++)
    cout<<arr[i];
}
 
int main()
{
   long long n,d;
   cin>>n>>d;
   
   long long arr[n];
   
   for(long long i=0;i<n;i++)
   cin>>arr[i];
   
   for(long long i=0;i<n;i++)
   cout<<arr[(i+d)%n]<<" ";
  /* leftRotate(arr, d, n);
   printArray(arr, n);
   getchar();
   */return 0;
}
