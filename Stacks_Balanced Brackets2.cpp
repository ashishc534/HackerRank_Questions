#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s) {
    stack<char> st;  
    
    for (int i=0;i<s.size();i++) {
        switch (s[i]) {
            case '{':
            case '(':
            case '[':
                st.push(s[i]);
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    
    return st.empty() ? "YES" : "NO";
}


int main(){
    int t;
    cin >> t;
    while(t--)
        {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}
