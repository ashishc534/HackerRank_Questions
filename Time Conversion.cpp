#include<bits/stdc++.h>
using namespace std;

void printArrayPm(char arr[],int n)
{
	for(int i=0;i<n-2;i++)
	cout<<arr[i];
}
void changePm(char arr[],int n)
{
	char a=arr[0];
	char b=arr[1];
	
	if(arr[0]=='1' && arr[1]=='2')
	printArrayPm(arr,n);
	else
	{
	int c=int(a)-48;
	int d=int(b)-48;
	
	int e=c+1;
	int f=d+2;
	
	arr[0]=char(e)+48;
	arr[1]=char(f)+48;
	
	printArrayPm(arr,n);
	}
	
}
void printArrayAm(char arr[],int n)
{
for(int i=0;i<n-2;i++)
	cout<<arr[i];
}
void changeAm(char arr[],int n)
{
	char a=arr[0];
	char b=arr[1];
	
	if(a=='0')
	printArrayAm(arr,n);
	else
	{
	int c=int(a)-48;
	int d=int(b)-48;
	
	int e=c-1;
	int f=d-2;
	
	arr[0]=char(e)+48;
	arr[1]=char(f)+48;
	
	printArrayAm(arr,n);
	}
}
void convert(string s)
{
	int n=s.size();
	char arr[n];
	int k=0;
	for(int i=0;i<s.size();i++)
	arr[k++]=s[i];
	
	if(s[n-2]=='P')
	changePm(arr,k);
	
	else
	changeAm(arr,k);
	
}
int main()
{
	string s;
	cin>>s;
	
	convert(s);
	return 0;
}
