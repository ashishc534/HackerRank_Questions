#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long s,t,a,b,m,n;
	
	long long countOfOranges=0,countOfApples=0;
	
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	
	long long apples[m],oranges[n];
	
	for(int i=0;i<m;i++)
	{
	int n1=a;
	cin>>apples[i];
	n1+=apples[i];
	
	if(n1>=s && n1<=t)
	countOfApples+=1;
	
	}
	
	for(int j=0;j<n;j++)
	{
	int n2=b;
	cin>>oranges[j];
	n2+=oranges[j];
	
	if(n2>=s && n2<=t)
	countOfOranges+=1;
	}
	
	cout<<countOfApples<<" "<<countOfOranges;
	return 0;
}
