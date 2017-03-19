#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
}**head,*temp;

node *newNode(int data)
{
	temp = new node;
	temp->data=data;
	temp->next=NULL;
	
	return temp;
}
node *remove(node *head)
{
	if(!head)
	return NULL;
	
	temp = head;
	while(temp->next!=NULL)
	{
		if(temp->data == temp->next->data)
		temp->next=temp->next->next;
		else
		temp = temp->next;
	}
	return head;
}
void print(node *n)
{
	temp = n;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	node *head=NULL;
	
	head=newNode(1);
	head->next=newNode(1);
	head->next->next=newNode(1);
	head->next->next->next=newNode(1);
	head->next->next->next->next=newNode(2);
	head->next->next->next->next->next=newNode(2);
	print(head);
	node *n = remove(head);
	cout<<endl;
	print(n);	
}
