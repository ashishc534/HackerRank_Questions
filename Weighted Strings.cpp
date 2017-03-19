#include<bits/stdc++.h>
using namespace std;

int getInt(char k)
{
	return (int(k)-96);
}
bool storeInArray(string s,long long int k)
{
	vector<long long>v;
	long long count=1,m=0;
	
	for(int i=0;i<s.size();)
	{
		if(s[i]!=s[i+1])
		{
			v.push_back(getInt(s[i]));
			i++;
		}
		else
		{
			int count=1;
			while(s[i]==s[i+1])
			{
				v.push_back(getInt(s[i])*count);
				count+=1;
				i++;
			}
			v.push_back(getInt(s[i])*count);
			i++;
		}
	}
	vector<long long>::iterator it;
	it=find(v.begin(),v.end(),k);
	
	if(it!=v.end())
	return true;
	
	else
	return false;
}
bool search(string s,long long int k)
{
	return storeInArray(s,k);
	
}
int main()
{
	string s;
	long long int t,k;
	
	cin>>s;
	cin>>t;
	
	while(t--)
	{
		cin>>k;
		
		if(search(s,k))
		cout<<"Yes\n";
		
		else
		cout<<"No\n";
	}
	return 0;
}
