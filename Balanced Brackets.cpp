#include<bits/stdc++.h>
using namespace std;

int isbracket(char s)
{
	return(s=='[' || s=='(' || s=='{');
}

int isoppbracket(char s,char top)
{
	return ((s==')' && top=='(') || (s=='}' && top=='{') || (s==']' && top=='['));
}
bool balanced(string s)
{
	stack<char>st;
	
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(isbracket(s[i]))
		st.push(s[i]);
		
		else if(isoppbracket(s[i],st.top()))
		st.pop();
	}
	if(st.empty())
	return true;
	else
	return false;
}
int main()
{
	int n;
	cin>>n;
	
	string s;
	
	while(n--)
	{
		cin>>s;
		balanced(s) ? cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
