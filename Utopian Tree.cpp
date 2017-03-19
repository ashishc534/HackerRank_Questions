#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	
	while(t--)
	{
		int height=1;
		
		cin>>n;

			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				height*=2;
				
				else
				height+=1;
			}
		cout<<height<<endl;		
	}
}
