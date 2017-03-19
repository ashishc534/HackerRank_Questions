#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long arr[5];
	long long minValue=INT_MAX;
	long long sumMin=0,sumMax=0;
	long long maxValue=INT_MIN;
	for(int i=0;i<5;i++)
	{
	cin>>arr[i];
	minValue=min(minValue,arr[i]);
	maxValue=max(maxValue,arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		sumMin+=arr[i];
		sumMax+=arr[i];
	}
	sumMin=sumMin-maxValue;
	sumMax=sumMax-minValue;
	
	cout<<sumMin<<" "<<sumMax;
	return 0;
}
