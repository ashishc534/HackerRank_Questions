#include<bits/stdc++.h>
#include<string>
#define mod 1000000007
using namespace std;

int StringtoInt(char s[])
{
	int x;
	sscanf(s,"%d",&x);
	return x;
}
string ToStr(char c)
{
	return(string(1,c));
}
void printSubsequences(char arr[100], int n)
{
    unsigned int opsize = pow(2,n);
 	int count=0;
 	for (int counter = 1; counter < opsize; counter++)
    {
    	string s;
    	int k=0;
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
			{
				s.insert(k,ToStr(arr[j]));
				k++;			
			}
        }
        char t[100];
        strcpy(t,s.c_str());
        int x=StringtoInt(t);
        if((x % 8)==0)
        count++;
        count = count %mod;
    }
   cout<<count;
}
 
int main()
{
	int n;
	int k=0;
	scanf("%d",&n);
	
	char s[n],arr[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	
	printSubsequences(s,n);
	return 0;
}
