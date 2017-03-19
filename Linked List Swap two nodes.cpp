#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
}**head,*temp;

node *newNode(int data)
{
	temp= new node;
	temp->data=data;
	temp->next=NULL;
	
	return temp;
}

void printList(node *n)
{
	temp=n;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp= temp->next;
	}
}

void swapHeads(node **head,int n1,int n2)
{
	node *p=(*head);
	node *q=(*head);
	node *r=(*head);
	
	while(p->data!=n1)
	p=p->next;
	
	while(q->data!=n2)
	{
		r=q;
		q=q->next;
	}
	
	cout<<"\nAddress of "<<p->data<<" before Swapping : "<<(*head)<<" and "<<q->data<<" before Swapping : "<<r->next<<endl;;
	
	node *t=p->next;
	node *u=q->next;
	
	r->next=p;
	p->next=u;
	q->next=t;
	
	(*head)=q;
	
	cout<<"\n\nAddress of "<<p->data<<" After Swapping : "<<(*head)<<" and "<<q->data<<" After Swapping : "<<r->next<<endl;
	
}
void swapNodes(node **head,int n1,int n2)
{
	node *p=(*head);
	node *q=(*head);
	node *r=(*head);
	node *s=(*head);
	
	if(n1==(*head)->data || n2==(*head)->data)
	swapHeads(head,n1,n2);
	
	else
	{
	while(q->data!=n1) {
		p=q;
		q=q->next;
	}
	while(s->data!=n2)
	{
		r=s;
		s=s->next;
	}
	
	cout<<"\nAddress of "<<q->data<<" before Swapping : "<<p->next<<" and "<<s->data<<" before Swapping : "<<r->next<<endl;
	node *t=q->next;
	node *u=s->next;
	
	p->next=s;
	s->next=t;
	r->next=q;
	q->next=u;
	cout<<"\n\nAddress of "<<q->data<<" After Swapping : "<<p->next<<" and "<<s->data<<" After Swapping : "<<r->next<<endl;
	}
}
int main()
{
	node *n=NULL;
	n=newNode(1);
	n->next=newNode(2);
	n->next->next=newNode(3);
	n->next->next->next=newNode(4);
	n->next->next->next->next=newNode(5);
	n->next->next->next->next->next=newNode(6);
	
	cout<<"\nOriginal List : ";
	printList(n);	
	
	swapNodes(&n,1,4);
	cout<<endl<<"After Swapping : ";
	
	printList(n);
}
