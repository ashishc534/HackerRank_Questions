#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	string s,k="hackerrank";
	
	while(n--)
	{
		cin>>s;
	
		string a;
	
		int i=0,n=s.size();
		
		while(s[i]!='h' && i<n)
		i++;
		a.push_back(s[i]);
		
		while(s[i]!='a' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		while(s[i]!='c' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		while(s[i]!='k' && i<n)
		i++;
		
		a.push_back(s[i]);
		while(s[i]!='e' && i<n)
		i++;
		
		a.push_back(s[i]);
		while(s[i]!='r' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		i++;
		while(s[i]!='r' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		while(s[i]!='a' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		while(s[i]!='n' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		while(s[i]!='k' && i<n)
		i++;
		
		a.push_back(s[i]);
		
		if(a=="hackerrank")
		cout<<"YES\n";
		else
		cout<<"NO\n";
		}
		return 0;
}
