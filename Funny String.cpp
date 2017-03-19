#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int flag=1;
	while(t--)
	{
		char s[10000];
		cin>>s;
		int n=strlen(s);
		
		for(int i=0,j=n;i<n,j>0;i++,j--)
		{
		int k=0,l=0;
		cout<<int(s[i]);
		
		if(k!=l)
		{
			flag=0;
			break;
		}
	}
		if(flag==1)
		cout<<"Funny\n";
		else
		cout<<"Not Funny\n";
	}
}

