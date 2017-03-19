#include<bits/stdc++.h>
using namespace std;

int main() {

    int rocks;
    cin>>rocks;
 
    char letter[26] = {0};
    int count = 0;
 
    for (int r = 0; r < rocks; r++) {
        char s[100];
        cin>>s;
       
	    for (int i = 0; i < strlen(s); i++) {
            
            if (letter[s[i] - 'a'] == r) {
                letter[s[i] - 'a']++;
                if (letter[s[i] - 'a'] == rocks) {
                    count++;
        }
            }
        }
    }

    cout<<count;

    return 0;
}
