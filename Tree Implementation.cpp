#include<bits/stdc++.h>
using namespace std;

struct binaryTree
{
	int data;
	struct binaryTree *right,*left;
};

binaryTree *createNewTreeNode(int data)
{
	struct binaryTree *newNode=new(binaryTree);
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	
	return newNode;
}

struct node
{
	struct binaryTree *data;
	struct node *next;
}*front,*rear;

node *createNewNode(struct binaryTree *data)
{
	struct node *newNode=new(node);
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}

void enQueue(struct binaryTree *data)
{
	struct node *temp=createNewNode(data);
	
	if(front==NULL)
	{
		front=rear=temp;	
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
	
	return;
}

binaryTree *deQueue()
{
	struct node *temp=NULL;
	struct node *temp2=NULL;
	
	if(front==NULL)
	{
		return NULL;
	}
	else
	{
		temp=temp2=front;
		//temp2=front;
		front=front->next;
		delete(temp);
		return temp2->data;
	}
	
	return NULL;
}

void displayQueue()
{
	struct node *temp=front;
	if(front==NULL)
		return;
		
	while(front!=NULL)
	{
		cout<<front->data->data;
		if(front->next) cout<<"->";
		front=front->next;
	}
	cout<<endl;
}

int main()
{
	struct binaryTree *root=createNewTreeNode(1);
	struct binaryTree *second=createNewTreeNode(2);
	struct binaryTree *third=createNewTreeNode(3);
	struct binaryTree *fourth=createNewTreeNode(4);
	struct binaryTree *fifth=createNewTreeNode(5);
	struct binaryTree *sixth=createNewTreeNode(6);
	struct binaryTree *seventh=createNewTreeNode(7);
	
	enQueue(root);
	enQueue(second);
	enQueue(third);
	
	displayQueue();
	
	enQueue(fourth);
	
	displayQueue();
	//struct binaryTree *temp=deQueue();
	
	//displayQueue();
	
	return 0;
}
