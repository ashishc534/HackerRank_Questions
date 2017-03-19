#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q,k;
cin>>n;
string s="",s1,a="";
stack<string> st;
while(n--) {
    cin>>q;

       if(q==1){
				cin>>s1;
                st.push(s);
                s+=s1;
			}
        if(q==2)
		{
		cin>>k;
                st.push(s);
                a=s;
                int len=a.length();
                s="";
                s.append(a,0,len-k);
    	}
        if(q==3){
		cin>>k;
                   cout<<s[k-1]<<"\n";
		}
        if(q==4){
                s=st.top();
                st.pop();

		}
}
}

