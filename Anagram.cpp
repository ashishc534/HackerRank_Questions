#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[10000],b[10000];
	int c[26],d[26]={0};
	int count=0;
	cin>>a>>b;
	int n=strlen(a);
	int m=strlen(b);
	
	for(int i=0;i<n;i++)
	d[a[i]-'a']++;
	
	for(int i=0;i<m;i++)
	c[b[i]-'a']++;
	
	
	for(int i=0;i<26;i++)
	{
		count+=abs(d[i]-c[i]);
	}
	cout<<endl<<count;
	
}
