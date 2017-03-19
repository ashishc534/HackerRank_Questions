#include<bits/stdc++.h>
using namespace std;

int main()
{
	
int n,k;
cin>>n>>k;

int c=0,sum=0;

int l,t;
vector<int>v;

for(int i=0;i<n;i++)
{
	cin>>l>>t;
	if(t==1)
	{
	v.insert(v.begin()+c,l);
	c+=1;
	}
	sum+=l;
}
if(v.size() > k)
{
sort(v.begin(),v.begin()+v.size());
for(int i=0;i<v.size();i++)
{
	if(i < v.size()-k)
	sum-= (2*v[i]);
}
}
cout<<sum;
	return 0;
}
