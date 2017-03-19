#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
char s[10000],*str; 
int a[26]={0};
bool flag=true;
 
int index=0;
gets(s); 
str=s; 

for(;*str;str++) 
{ 
	if(*str== ' ') 
	continue; 
	
	if(isupper(*str))
	s[index++]=tolower(*str);

	else
	s[index++]=*str;
}

s[index]='\0';
for(int i=0;i<strlen(s);i++)
{
	a[s[i]-'a']++;
}
for(int i=0;i<26;i++)
{
	if(a[i]==0)
	{
	flag=false;
	break;
	}
}
if(flag)
cout<<"pangram";
else
cout<<"not pangram";
} 
