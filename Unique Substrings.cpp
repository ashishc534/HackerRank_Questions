#include<bits/stdc++.h>
using namespace std;

string getsubstring(string s, int l ,int r)
{
	char res[1000];
	
	if(l>=0 &&l<r&& r<=s.size())
	{
		for(int i=l,k=0;i<r;i++)
		res[k++]=s[i];
	}
	for(int i=0;i<strlen(res);i++)
	cout<<res[i];
}
int main()

{
	string s="sampletext";
	int n=s.size();
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int z=i+j;
			if(z<=n)
			cout<<getsubstring(s,j,z)<<endl;
	}
}
}

