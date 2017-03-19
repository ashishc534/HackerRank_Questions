#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	
	cin>>n;
	
	while(n--){
	
	cin>>s;
	
	int count=0;
	
	for(int i=0;i<s.size();)
	{
		if(s[i]!=s[i+1])
		i++;
		
		else
		{
			count++;
			i++;
		}
	}
	cout<<count<<endl;
	}
	return 0;
}
