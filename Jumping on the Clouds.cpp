#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int count=0;
	int i=0;
	
	while(i<n-1)
	{
		if(arr[i+1]==0 && arr[i+2]==1)
		{
			count+=1;
			i++;
		}
		
		else if(arr[i+1]==1 && arr[i+2]==0)
		{
			count+=1;
			i+=2;
		}
		else if(arr[i+1]==0 && arr[i+2]==0)
		{
			count+=1;
			i+=2;
		}
		if(i==n-2 && arr[i]==0 && arr[i+1]==0 )
		{
			count+=1;
			i+=1;
			break;
		}
	}
	cout<<count;
}
