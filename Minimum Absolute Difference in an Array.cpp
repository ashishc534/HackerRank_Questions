#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	long long arr[n];
	long long minValue=INT_MAX;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	sort(arr,arr+n);
	
	for(int i=0;i<n-1;i++)
	{
		minValue=min(minValue,abs(arr[i]-arr[i+1]));
	}
	cout<<minValue;
	return 0;
}
