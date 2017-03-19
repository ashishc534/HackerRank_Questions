#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    string word;
    int ops;
    
	while (T--) 
	{
        cin >> word;
        ops = 0;
        
		for (int i = 0, j = word.size()-1; i < j; ++i, --j) 
		{
            
			ops += abs(word[j]-word[i]);
        }
        cout << ops << endl;
    }

    return 0;
}
