#include<bits/stdc++.h>
using namespace std;

int diagonalSumDifference(int arr[],int n,int k)
{
	int d1=0,d2=0;
	
	int i=0;
	while(i<k)
	{
		d1+=arr[i];
		i=i+(n+1);
	}
	i=n-1;
	while(i<(k-(n-1)))	
	{
		d2+=arr[i];
		i+=(n-1);
	}
	return abs(d1-d2);
}
int main()
{
	int n;
	cin>>n;
	
	int k=n*n;
	int arr[k];
	
	
	for(int i=0;i<k;i++)
	cin>>arr[i];
	
	cout<<diagonalSumDifference(arr,n,k);
	return 0;
}
