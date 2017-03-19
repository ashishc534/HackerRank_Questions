#include<bits/stdc++.h>
using namespace std;

int CamelCase(string s)
{
	int flag=1;
	
	for(int i=0;i<s.size();i++)
	if(isupper(s[i]))
	flag+=1;
	
	return flag;
}
int main()
{
	string s;
	cin>>s;
	
	cout<<CamelCase(s);
	return 0;
}
