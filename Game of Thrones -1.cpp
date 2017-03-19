#include<bits/stdc++.h>
using namespace std;

void CheckPalindrome(char *s,int n)
{
	int a[26]={0};
	int flag=0;
	for(int i=0;i<n;i++)
		a[s[i]-'a']++;
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			count++;
		}
	}
	if(count > 1)
	flag=1;
	
	if(flag==1)
	cout<<"NO";
	else
	cout<<"YES";
}
int main()
{
	char s[100001];
	cin>>s;
	
	int n=strlen(s);

	CheckPalindrome(s,n);
	
}
