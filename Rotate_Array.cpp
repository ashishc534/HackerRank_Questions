#include<bits/stdc++.h>
using namespace std;

void RotateOnebyOne(int arr[],int n)
{
	int temp=arr[n-1];
	
	for(int i=n-1;i>0;i--)
	arr[i]=arr[i-1];
	
	arr[0]=temp;
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
void leftRotation(int arr[],int n,int d)
{
	for(int i=0;i<d;i++)
	RotateOnebyOne(arr,n);
}
int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	leftRotation(arr,n,d);
	printArray(arr,n);
}
