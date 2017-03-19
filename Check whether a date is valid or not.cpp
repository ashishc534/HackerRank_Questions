#include<bits/stdc++.h>
using namespace std;

#define january 1
#define february 2
#define march 3
#define april 4
#define may 5
#define june 6
#define july 7
#define august 9
#define september 9
#define october 10
#define november 11
#define december 12

char months[][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int getMonth(string s)
{
	queue<char>st;
	int flag=0,k=0;
	char arr[9];
	
	for(int i=0;i<s.size();)
	{
		flag++;
		
		if(!isdigit(s[i]) && flag>3)
		{
			st.push(s[i]);
			
			i++;
		}
		else i++;
	}
	
	int f=0;
	while(1)
	{
		char a=st.front();
		arr[k++]=a;
		st.pop();
		
		if(st.empty())
		break;	
	}
	
	string str(arr);
	int n=str.size();
	cout<<str<<endl;
	str.erase(n-3);
	cout<<str;
	
	string month(months[0]);
	cout<<endl<<month;
	
	for(int i=0;i<12;i++)
	{
		
		if(month==str)
		return i+1;
	}
	
	return 0;
}
int main()
{
	string s;
	getline(cin,s);
	
	string a="h";
	string b="h";
	
	int day=s[0];
	
	cout<<getMonth(s);
	
	return 0;
	
}
