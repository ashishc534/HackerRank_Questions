#include<bits/stdc++.h>
using namespace std;

bool isAltered(char a)
{
	return (a!='S' && a!='O');
}
bool isWord(char a,char b,char c)
{
	return (a=='S' && b=='O' && c=='S');
}
int checkAltered(string s)
{
	int i=1,count=0;
	int n=s.size();
	
	for(int i=0;i<n;i+=3)
	{
		if(s[i]!='S')
		count++;
		
		if(s[i+1]!='O')
		count++;
		
		if(s[i+2]!='S')
		count++;
	}
	return count;
}
int main()
{
	string s;
	cin>>s;
	
	cout<<checkAltered(s);
	return 0;
}
