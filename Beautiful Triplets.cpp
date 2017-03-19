#include<bits/stdc++.h>
using namespace std;

bool bsearch(int arr[],int low,int data,int high)
{
	
	if(low > high)
	return 0;
	
	int mid=(low+high)/2;
	
	if(data==arr[mid])
	return true;
	
	if(data > arr[mid])
	return bsearch(arr,(mid+1),data,high);
	
	else
	return bsearch(arr,low,data,(mid-1));
}
int beautifulTriplets(int arr[],int n,int d)
{	
	int count=0;
	for(int i=0;i<n;i++)
	{	
		int c=arr[i]+d;
		if(bsearch(arr,0,c,n-1))
		{
			if(bsearch(arr,0,(c+d),n-1))
			count++;
		}
		else
		continue;
	}
	return count;
}
int main()
{
	int n,d;
	cin>>n>>d;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<beautifulTriplets(arr,n,d);
	return 0;
}
