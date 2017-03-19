#include<bits/stdc++.h>
using namespace std;

void moves(long long  arr[1000][1000],long long a,long long b,long long n)
{
	int i=a,j=b;
	int count=0;
	
	int h=0;
	
	while(i<n)
	{
		i++;
		
		if(arr[i][j]==5)
		break;
		
		count++;
		
	}
	
	i=a,j=b;
	while(i>1)
	{
		i--;
		
		if(arr[i][j]==5)
		break;
		count++;
		
	}
	
	i=a,j=b;
	while(j<n)
	{
		j++;
		
		if(arr[i][j]==5)
		break;
		count++;
		
	}
	i=a,j=b;
	while(j>1)
	{
		j--;
		
		if(arr[i][j]==5)
		break;
		count++;
		
	}
	i=a,j=b;
	while(i<n && j<n)
	{
		i++;
		j++;
		
		if(arr[i][j]==5)
		break;
		count++;
		
	}
	i=a,j=b;
	while(i>1 && j<n)
	{
		i--;
		j++;
		
		if(arr[i][j]==5)
		break;
		count++;
		
	}
	i=a,j=b;
	while(i>1 && j>1)
	{
		i--;
		j--;
		
		if(arr[i][j]==5)
		break;
		count++;
			
	}
	i=a,j=b;
	while(i<n && j>1)
	{
		i++;
		j--;
		
		if(arr[i][j]==5)
		break;
		count++;
		
	}
	
	cout<<count;
}
int main()
{
	long long n,k;
	cin>>n>>k;
	
	long long a,b,p,q;
	long long arr[1000][1000];
	cin>>a>>b;
	
	arr[a][b]=1;
	
	while(k--)
	{
		cin>>p>>q;
		if(p<n  && q<n)
		arr[p][q]=5;
		
	}
	moves(arr,a,b,n);
	return 0;
}
