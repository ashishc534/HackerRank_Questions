#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *l;
	node *r;
}**root,*temp;

node *newNode(char data)
{
	temp= new node;
	temp->data=data;
	temp->l=temp->r=NULL;
	
	return temp;
}

void decode(node *root, string s, int size)
{
	char b[10000];
	
	if(!root)
	return;
	
	node *current=root;
	for(int i=0,k=0;i<=size;)
	{
		if(s[i]=='1')
		{
			current=current->r;
			if(current->data!='\0')
			{
			b[k++]=current->data;
			current = root;
			i++;
			}
			else
			i++;
		}
		if(s[i]=='0')
		{
			current=current->l;
			if(current->data !='\0')
			{
			b[k++]=current->data;
			current = root;
			i++;
			}
			else i++;
		}
	}
	for(int i=0;i<strlen(b);i++)
	cout<<b[i];
}
int main()
{
 node *root= newNode('\0');
 root->l=newNode('\0');
 root->r=newNode('A');
 root->l->l=newNode('B');
 root->l->r=newNode('C');
 
 string s="1001011";
 int n=s.size();
 
 decode(root,s,n-1);
}
