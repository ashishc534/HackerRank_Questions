#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	int arr[100];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int E=100;

	for(int i=0;i<n;i+=k)
	{
		if(arr[i]==1)
		E-=3;
		
		else
		E-=1;
	}
	cout<<E;
	
	return 0;
}
