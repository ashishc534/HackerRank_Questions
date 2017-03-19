#include<bits/stdc++.h>
using namespace std;

int larr[1025],rarr[1025];
	
void swap(int &a,int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}

void inorder(int root)
{
	if(root==-1)
	return;
	
	inorder(larr[root]);
	cout<<root<<" ";
	inorder(rarr[root]);
}
void swap_nodes(int root,int k)
{
	int level=0;
	queue<int>q;
	q.push(root);
	
	while(!q.empty())
	{
		level++;
		int count=q.size();
		while(count--)
		{
			int p=q.front();
			q.pop();
			
			if(level % k==0)
			{
				int t=larr[p];
				larr[p]=rarr[p];
				rarr[p]=t;
				
			}
			if(larr[p]!=-1)
			q.push(larr[p]);
			
			if(rarr[p]!=-1)
			q.push(rarr[p]);
		}
	}
}
int main()
{
	int n,a,b;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		cin>>b;
		larr[i]=a;
		rarr[i]=b;
	}
	int t,k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		swap_nodes(1,k);
		inorder(1);
		cout<<endl;
	}
	return 0;
}
