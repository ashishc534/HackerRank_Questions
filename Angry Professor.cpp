#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,a,k,count=0;
		
		cin>>n>>k;
		
		while(n--)
		{
			cin>>a;
			
			if(a==0 || a<0)
			count++;
			
			else
			continue;
		}
	if(count>=k)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
	return 0;
}
