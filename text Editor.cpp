#include<bits/stdc++.h>
using namespace std;

struct Stack{
	int top;
	int temp;
	int size;
	char *array;
};

Stack *newStack(int size)
{
	Stack *s= new Stack;
	s->top=-1;
	s->size=size;
	s->array=new char[size];
	
	return s;
}
void push(Stack *s,char data)
{
	s->array[++s->top]=data;
	++s->temp;
}
char del(Stack *s)
{	
	return s->array[s->top--];
}
void print(Stack *s,int b)
{
	char arr[200];
	int i=0,k;
	for(i=0,k=0;i<b-1;i++)
	arr[k++]=del(s);
	cout<<s->array[i];
	
	for(int i=0;i<strlen(arr);i++)
	push(s,arr[i]);
	memset(arr,0,strlen(arr));
}
char undo(Stack *s1,queue<char>q)
{
	while(!q.empty())
	{
	char t=q.front();
	q.pop();
	push(s1,t);
	}
}
int isempty(Stack *s)
{
	return s->top==-1;
}
int main()
{
	int a,count=INT_MIN,temp[200];
	string s;
	int t,b;
	static int n=0;
	cin>>t;
	Stack *s1=newStack(200);
	Stack *s2=newStack(200);
	queue<char>q;
	
	char arr1[200];
		
	while(t--)
	{
		cin>>a;
			if(a==1){
				cin>>s;
				for(int i=0;i<s.size();i++)
				{
				push(s1,s[i]);
				n++;
				}
				cout<<endl;
				push(s2,'a');
				cout<<s2->array[s2->top];	
				}
			if(a==2){
				cin>>b;
				
				for(int i=0,k=0;i<=b;i++)
				arr1[k++]=del(s1);
				
				for(int i=0;i<strlen(arr1);i++)
				q.push(arr1[i]);
				cout<<endl;
				count=0;
				push(s2,'b');
				}
			if(a==3){
				cin>>b;
				print(s1,b);
				cout<<endl;
				}
			if(a==4){
				char c=del(s2);
				int x=0;
				if(count=='a'){
				while(x!=n)
				del(s1);
				x++;
				}
				else{
				for(int i=0;i<strlen(arr1);i++)
					push(s1,arr1[i]);
				}
				//undo(s1,q);
			}
		}
	}	

