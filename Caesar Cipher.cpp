#include<bits/stdc++.h>
using namespace std;

bool ischaracter(char a)
{
	return ((int(a)>=65) && int (a)<=122);
}

void cipher(char s[],int n,int k)
{
	for(int i=0;i<n;)
	{
		if(isalpha(s[i]))
		{
			if(isupper(s[i]))
			{
				s[i]=s[i]+k;
				
				if(s[i]>'Z')
				s[i]=s[i]-26;
			}
			
		else if(islower(s[i]))
		{
			s[i] = toupper(s[i]);
			
			s[i]=s[i]+k;
			
			if(s[i]>'Z')
			s[i]=s[i]-26;
			
			s[i]=tolower(s[i]);
		}
		i++;
		}
	
		else
		i++;
	}
	cout<<s;
}
int main()
{
	int n;
	cin>>n;
	
	char s[n];
	cin>>s;
	
	int k;
	cin>>k;
	
	cipher(s,n,k);
	return 0;
}
