#include<bits/stdc++.h>
using namespace std;

long long reverse(long long num)
{
	int rev_num=0;
	
	while(num > 0)
	{
		rev_num = rev_num*10 + (num%10);
		num/=10;
	}
	return rev_num;
}
long long beautifulDays(long long i, long long j, long long k)
{
	long long count=0;
	for(long long m=i;m<=j;m++)
	{
		if(abs(m-reverse(m))%k==0)
		{
			count+=1;
		}
	}
	return count;
	
}
int main()
{
	long long i,j,k;
	cin>>i>>j>>k;
	
	cout<<beautifulDays(i,j,k);
	return 0;
}
	
