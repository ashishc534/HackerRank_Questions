#include<bits/stdc++.h>
using namespace std;

int MinDeletions(int arr[],int n)
{
	int count=0,maxValue=INT_MIN,a[200]={0};
	for(int i=0;i<n;i++)
	{
		a[arr[i]]++;
	}
	for(int i=0;i<200;i++)
	maxValue=max(maxValue,a[i]);
	
	return (n-maxValue);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<MinDeletions(arr,n);
	return 0;
}
