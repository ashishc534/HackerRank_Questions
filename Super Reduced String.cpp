#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s="abba";
	int n=s.size();
	
	vector<char> result;
	bool flag = true;
	while(flag){
	    flag = false;
	    for(int i = 0; i < n-1; i++){
	        if(s[i] == s[i + 1]){
	            s.erase(i, 2);
	            flag = true;
	        }
	    }
	}
	if (s.empty())
	    cout << "Empty String" << endl;
		else
	    cout << s;
}
