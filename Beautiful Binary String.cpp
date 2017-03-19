#include<bits/stdc++.h>
using namespace std;

int findMindeletions(char *arr,int n)
{
	int count=0;
	for(int i=1;i<=n-1;)
	{
		if(arr[i-1]=='0' && arr[i]=='1' && arr[i+1]=='0')
		{
			arr[i+1]='1';
			count+=1;
			i++;
		}
		else
		i++;
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	char arr[n];
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	char *s;
	
	s=strstr(arr,"010");
	
	if(s==NULL)
	{
		cout<<"0";
	}
	else
	{
		cout<<findMindeletions(arr,n);
	}
	return 0;
}
