#include<bits/stdc++.h>
using namespace std;

int main()
{

	long long n,m,k,a,b,fin,res=0;
	
	cin>>n>>m;
	vector<long long>jars(n,0);
	
	while(m--)
	
	{
	cin>>a>>b>>k;
	
    res = res + ((b-a)+1)*k;
}    
	fin = floor(res/n);
	cout<<fin;
	return 0;
}
