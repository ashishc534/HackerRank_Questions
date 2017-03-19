#include<bits/stdc++.h>
using namespace std;

string minutes(int m)
{
	switch(m)
	{
		case 00 : return "o' clock";
				break;
		case 01 : return "one minute past ";
				break;
		case 02 : return "two minutes past ";
				break;
		case 03 : return "three minutes past ";
				break;
		case 04 : return "four minutes past ";
				break;
		case 05 : return "five minutes past ";
				break;
		case 06 : return "six minutes past ";
				break;
		case 07 : return "seven minutes past ";
				break;
		case 8 : return "eight minutes past ";
				break;
		case 9 : return "nine minutes past ";
				break;	
		case 10 : return "ten minutes past ";
				break;
		case 11 : return "eleven minutes past ";
				break;
		case 12 : return "twelve minutes past ";
				break;
		case 13 : return "thirteen minutes past ";
				break;
		case 14 : return "fourteen minutes past ";
				break;
		case 15 : return "fifteen minutes past ";
				break;
		case 16 : return "sixteen minutes past ";
				break;
		case 17 : return "seventeen minutes past ";
				break;
		case 18 : return "eighteen minutes past ";
				break;
		case 19 : return "nineteen minutes past ";
				break;
		case 20 : return "twenty minutes past ";
				break;
		case 21 : return "twenty one minutes past ";
				break;
		case 22 : return "twenty two minutes past ";
				break;
		case 23 : return "twenty three minutes past ";
				break;
		case 24 : return "twenty four minutes past ";
				break;
		case 25 : return "twenty five minutes past ";
				break;
		case 26 : return "twenty six minutes past ";
				break;
		case 27 : return "twenty seven minutes past ";
				break;
		case 28 : return "twenty eight minutes past ";
				break;
		case 29 : return "twenty nine minutes past ";
				break;
		case 30 : return "half past ";
				break;
	}
	return "";
}

string  mints(int m)
{
	switch (m)
	{
		case 31 : return "twenty nine minutes to ";
				break;
		case 32 : return "twenty eight minutes to ";
				break;
		case 33 : return "twenty seven minutes to ";
				break;
		case 34 : return "twenty six minutes to ";
				break;
		case 35 : return "twenty five minutes to ";
				break;
		case 36 : return "twenty four minutes to ";
				break;
		case 37 : return "twenty three minutes to ";
				break;
		case 38 : return "twenty two minutes to ";
				break;
		case 39 : return "twenty one minutes to ";
				break;		
		case 40 : return "twenty minutes to ";
				break;
		case 41 : return "nineteen minutes to ";
				break;
		case 42 : return "eighteen minutes to ";
				break;
		case 43 : return "seventeen minutes to ";
				break;
		case 44 : return "sixteen minutes to ";
				break;
		case 45 : return "quarter to ";
				break;
		case 46 : return "fourteen minutes to ";
				break;
		case 47 : return "thirteen minutes to ";
				break;
		case 48 : return "twelve minutes to ";
				break;
		case 49 : return "eleven minutes to ";
				break;
		case 50 : return "ten minutes to ";
				break;
		case 51 : return "nine minutes to ";
				break;
		case 52 : return "eight minutes to ";
				break;
		case 53 : return "seven minutes to ";
				break;
		case 54 : return "six minutes to ";
				break;
		case 55 : return "five minutes to ";
				break;
		case 56 : return "four minutes to ";
				break;
		case 57 : return "three minutes to ";
				break;
		case 58 : return "two minutes to ";
				break;
		case 59 : return "one minute to ";
				break;				
	}
	return "";
}
string hour(int h)
{
	switch(h)
	{
		case 1 : return "one ";
				break;
		case 2 : return "two ";
				break;
		case 3 : return "three ";
				break;
		case 4 : return "four ";
				break;
		case 5 : return "five ";
				break;
		case 6 : return "six ";
				break;
		case 7 : return "seven ";
				break;
		case 8 : return "eight ";
				break;
		case 9 : return "nine ";
				break;
		case 10 : return "ten ";
				break;
		case 11 : return "eleven ";
				break;
		case 12 : return "twelve ";
				break;	
	}
	return "";
}
int main()
{
	int h,m;
	
	cin>>h;
	cin>>m;
	
	string mins,min;
	
	if((60-m) >=30)
	mins = minutes(m);
	
	else
	min = mints(m);
	
	
	if(m > 0 && m<=30)
	cout<<mins<<hour(h);
	
	else if(m > 0 && m > 30)
	cout<<min<<hour((h+1));
	
	else if(m==0)
	cout<<hour(h)<<mins;
	
	return 0;
}
