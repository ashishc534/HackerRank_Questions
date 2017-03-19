#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	long long int n;
	
	cin>>s;
	int size=s.size();
	cin>>n;
	
	cout<<(n/size * count(s.begin(),s.end(),'a')) + (count(s.begin(),s.begin()+n%size,'a'));
}
