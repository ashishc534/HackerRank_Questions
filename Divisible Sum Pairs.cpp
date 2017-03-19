#include<bits/stdc++.h>
using namespace std;

int PerfectDivisible(int arr[100],int n,int k)
{
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((arr[i]+arr[j])%k==0)
			count+=1;
			
			else
			continue;
		}
	}
	return count;
}
int main()
{
	int n,k,arr[100];
	
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<PerfectDivisible(arr,n,k);
	return 0;	
}
