#include<bits/stdc++.h>
using namespace std;

void RotateOnebyOne(long arr[],long n)
{
	long temp=arr[0];
	
	for(long i=0;i<n-1;i++)
	arr[i]=arr[i+1];
	
	arr[n-1]=temp;
}
void printArray(long arr[],long n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
void leftRotation(long arr[],long n,long d)
{
	
	int i=0,j,count,m;
	for(m=0,count=0;count!=n;m++)
	{
		int t=arr[m];
	for(i=m,j=m+d;j!=m;i=j,j=j+d<n ?j+d : j+d-n,count++)
	arr[i]=arr[j];
	arr[i]=t;
	count++;
}
}
int main()
{
	int n,d;
	cin>>n>>d;
	long arr[n];
	
	for(long i=0;i<n;i++)
	cin>>arr[i];
	
	leftRotation(arr,n,d);
	printArray(arr,n);
}
