#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		long long n,m,s;
		
		cin>>n>>m>>s;
		
		while(1)
		{
			s+=1;
			m--;
			if(m==1)
			break;
		}
		cout<<s;
	}
}
