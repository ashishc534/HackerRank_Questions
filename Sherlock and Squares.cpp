#include<bits/stdc++.h>
using namespace std;

int Squares(long long a,long long b)
{
	long long count=0;
	
	count=(int(floor(sqrt(b)))-int(ceil(sqrt((a))))+1);
	
	return count;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	long long a,b;
	cin>>a>>b;
	cout<<Squares(a,b)<<endl;
	}	
	return 0;
}
