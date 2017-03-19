#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,time;
	cin>>t;
	
	time=1;
	int flag=0;
	long long ctr=3;
	
	while(time<=t)
	{
		time+=ctr;
		ctr=ctr*2;
	}
	cout<<time-t;
}
