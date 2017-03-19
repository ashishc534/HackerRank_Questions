#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	while(n--)
	{
		int c=0;
		
		int arr[26]={0};
		
		string s;
		cin>>s;
		
		for(int i=0;i<s.size();i++)
		arr[s[i]-'a']++;
		
		for(int i=0;i<26;i++)
		if(arr[i])
		c++;
		
		cout<<c;
	}
	
}
