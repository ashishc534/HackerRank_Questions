#include<bits/stdc++.h>
using namespace std;

struct node{
	
	int data;
	node *next;
}*temp;

int length(node *head)
    {
    int count=0;
        node *temp=head;
        while(temp)
            {
                count++;
                temp = temp->next;
        }
    return count;}
int FindMergeNode(node *headA, node *headB)
{
    int L1=length(headA);
    int L2=length(headB);
    
    node *head1,*head2;
    int diff=0;
    if(L1 > L2)
        {
    diff=abs(L1-L2);
    head1=headA;
        head2=headB;
    }
    else if(L2 > L1)
        {
diff=abs(L1-L2);
    head1=headB;
    head2=headA;
    }
    else
    {
    	diff=0;
    	head1=headA;
    	head2=headB;
	}
    for(int i=0;i<diff;i++)
        {
        head1=head1->next;
            }
    int flag=0;
    while(head1 && head2)
        {
            if(head1 == head2)
            {
                flag=1;
                break;
            }
    head1=head1->next;
    head2=head2->next;
    }
    if(flag)
    return head1->data;
}
node *newNode(int data)
{
	temp = new node;
	temp->data=data;
	temp->next=NULL;
	
	return temp;
}

int main()
{
	node *head1=NULL;
	node *head2=NULL;
	
	head1=newNode(1);
	head1->next=newNode(2);
	head1->next->next=newNode(3);
	
	head2=newNode(1);
	head2->next=head1->next->next;
	
	cout<<FindMergeNode(head1,head2)<<endl;
}
