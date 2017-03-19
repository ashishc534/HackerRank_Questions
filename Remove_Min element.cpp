#include<bits/stdc++.h>
using namespace std;

void remove(int arr[],int pos,int n)
{
	while(pos<n)
	{
		arr[pos-1]=arr[pos];
		pos++;
	}
	n--;
}
void remove(int arr[],int &n)
{
	int minValue=INT_MAX;
	for(int i=0;i<n;i++)
	minValue=min(minValue,arr[i]);
	
	int k=0;
	for(int i=0;i<n;i++)
	if(arr[i]==minValue)
	k=i;
	
	remove(arr,k,n);
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
}
int main()
{
	int arr[]={1,2,4,5,5};
	int n=5;
	
	int k=2;
	//while(k--)
	remove(arr,n);
	
	}
