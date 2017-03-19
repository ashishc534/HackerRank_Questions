#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,c,m,p,maxVal=INT_MIN;
	scanf("%d%d%d",&n,&c,&m);
	
	while(n--)
	{
	scanf("%d",&p);
	maxVal=max(maxVal,p);
	}
	
	if(maxVal > (c*m))
	printf("No");
	else
	printf("Yes");
}
