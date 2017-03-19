#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
}**root,*temp;

node *newNode(int data)
{
	temp= new node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void push(node **root,int data,queue<node *>&q)
{
	temp=newNode(data);
	
	if(!*root)
	*root=temp;
	
	else
	{
		node *p=q.front();
		
		if(!p->left)
		p->left=temp;
		
		else if(!p->right)
		p->right=temp;
		
		if(p && p->left && p->right)
		q.pop();
	}
	q.push(temp);

}

bool search(node *root,int data)
{
	if(!root)
	return false;
	
	if(root->data==data)
	return true;
	
	return (search(root->left,data) || search(root->right,data));
}
int main()
{
	string s;
	cin>>s;
	queue<node *>q;	
	long long n;
	cin>>n;
	
	node *root=NULL;
	for(long long i=0;i<s.size();)
	{
		long long pow=1;
		
		if(s[i]!=s[i+1])
		{
			push(&root,int(s[i])-96,q);
			i++;
		}
		else if(s[i]==s[i+1])
		{
			while(s[i]==s[i+1])
			{
				push(&root,((int(s[i])-96)*pow),q);
				pow++;
				i++;
			
			}
					push(&root,((int(s[i])-96)*pow),q);
					i++;
		}
	}
	while(n--)
	{
		long long l;
		cin>>l;
		
		if(search(root,l)!=NULL)
		cout<<"Yes\n";
		
		else cout<<"No\n";	
	}	
	return 0;
}
