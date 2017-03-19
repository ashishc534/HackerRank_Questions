#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	long arr[n];
	
	int minValue=INT_MAX;
	int array[1000]={0};
	int count=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==1)
	cout<<"-1";
	else
	{
		for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count=1;
				minValue=min(minValue,abs(i-j));
			}
		}
	}
	if(count==1)
	cout<<minValue;
	else
	cout<<"-1";
}
}
