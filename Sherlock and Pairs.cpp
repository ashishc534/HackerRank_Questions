#include<bits/stdc++.h>
using namespace std;

long long printIndices(long long arr[] , long long n)
{
	sort(arr,arr+n);
	
	
	long long count=0,a[1000000]={0};
	int i=0,j=1;
	
	for(int i=0;i<n;i++)
	{
		a[arr[i]-1]++;
	}
	for(long long i=0;i<1000000;i++)
	{
		if(a[i]>1)
		count+=a[i]*(a[i]-1);
	}
	return count;
}
int main()
{
	int t;
	long long n;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		long long arr[n];
		
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		cout<<printIndices(arr,n);
		cout<<endl;
	}
	return 0;
}
