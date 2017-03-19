#include<bits/stdc++.h>
using namespace std;

void rotateOnebyOne(long long arr[],long long n,int q)
{
	long long i;
	
	int m;
	
	int temp = arr[0];
	
	for( i=1;i<n;i++)
	arr[i-1]=arr[i];
	
	arr[i]=arr[0];
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	cout<<endl;
}
void rotate_array(long long arr[],long long n,long long k,int q)
{
	long long i;
	
	for(i=0;i<k;i++)
	rotateOnebyOne(arr,n,q);
}
int main()
{
	long long n,i,k;
	int q;
	cin>>n>>k>>q;
	
	long long arr[n];
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	rotate_array(arr,n,k,q);
}
