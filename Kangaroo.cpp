#include<bits/stdc++.h>
using namespace std;

bool check(int x1,int v1,int x2,int v2)
{
	int c1=0,c2=0;
	
	if(x2>x1 && v2>v1)
	return false;
	
	while(1)
	{
		x1+=v1;
		c1+=1;
		x2+=v2;
		c2+=1;
		if(x1==x2)
		break;
	}
	if(c1==c2)
	return true;
	
	return false;
}
int main()
{
	int x1,x2;
	int v1,v2;
	
	cin>>x1>>v1>>x2>>v2;
	
	check(x1,v1,x2,v2) ? cout<<"YES" : cout<<"NO";
	return 0;
}
