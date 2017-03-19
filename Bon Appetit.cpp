#include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum=0,n,k;
	cin>>n>>k;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	if(i!=k)
	sum+=arr[i];
	}
	int b;
	cin>>b;
	
	if(b==sum/2)
	cout<<"Bon Appetit";
	else
	cout<<(b-sum/2);
	
	return 0;
}
