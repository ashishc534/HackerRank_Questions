#include<bits/stdc++.h>
using namespace std;

int main()
{
	int heights[26];
	for(int i=0;i<26;i++)
	cin>>heights[i];
	
	char s[10];
	cin>>s;
	
	int maxheight=INT_MIN;
	for(int i=0;i<strlen(s);i++)
	{
		maxheight=max(maxheight,(heights[int(s[i])-97]));	
	}
	cout<<maxheight*strlen(s);
	
	return 0;	
}
