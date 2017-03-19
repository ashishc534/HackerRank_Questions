#include<bits/stdc++.h>
using namespace std;

int hashValue(string pat,int n)
{
	int h=0,size=n;
	for(int i=0;i<size;i++)
	{
		h+=(int(pat[i])-49)*pow(10,n--);
		
		if(i==size-1)
		h+=(int(pat[i])-48);
	}
	return h;
}
int main()
{
	string txt="123456";
	string pat="1234";
	
	int n=txt.size();
	int m=pat.size();
	
	int hp=hashValue(pat,m);
	
	int j;
	for(int i=0;i<n;i++)
	{
		int ht=hashValue(txt,m);
		
		if(ht==hp)
		{
			for(int j=0;j<m;j++)
			if(txt[i+j]!=pat[j])
			break;	
		}
		if(j==m)
		cout<<"Pattern Found at "<<i;	
	}	
	return 0;
}
	
