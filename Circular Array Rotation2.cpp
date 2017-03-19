#include<bits/stdc++.h>
using namespace std;

void rotateOnebyOne(long long arr[],long long n)
{
	long long i;
	
	int m;
	
	int temp = arr[0];
	
	for( i=0;i<n-1;i++)
	arr[i]=arr[i+1];
	
	arr[i]=temp;
	
}
void rotate_array(long long a[],long long n,int k)
{
	
	while(k--)
	{
   int temp = a[n-1];

   for(int q=n-1;q>=1;q--)
   {
       a[q]=a[q-1];
   }
    a[0]=temp;
	}
}

int main()
{
	long long arr[100],n,k,q;
	int m;
	cin>>n>>k>>q;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i++)
	  arr[(i+k)%n] = arr[i+1];
	
	while(q--)
	{
		cin>>m;
		cout<<arr[m]<<endl;
	}
	return 0;
}
