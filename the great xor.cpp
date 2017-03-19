#include<bits/stdc++.h>
using namespace std;

# define ll long long 

int main()
{
	ll unsigned int q;
	cin>>q;
	
	while(q--)
	{
		ll unsigned int x,a;
		int count=0;
		cin>>x;
		
		for(a=1;a<x;a++)
		{
			if((a^x)>x)
			count++;
		}
		cout<<count<<endl;
	}
}
