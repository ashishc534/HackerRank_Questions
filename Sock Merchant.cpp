#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	sort(arr,arr+n);
	
	int i=0,j=1;
	while(i<n)
	{
		if(arr[i]==arr[j])
		{
		count++;
		i+=2;
		j+=2;
		}
		else
		{
			i+=1;
			j+=1;
		}
	}
	cout<<count;
}
