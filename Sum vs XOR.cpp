#include<bits/stdc++.h>
using namespace std;


long long SumVsXOR(long long n)
{	
	long long count=0;
	
	while(n)
	{
		count+= n%2 ? 0:1;	
		n/=2;
	}
	return pow(2,count);
}
int main()
{
	long long n;
	cin>>n;
	
	cout<<SumVsXOR(n);
	return 0;
}
