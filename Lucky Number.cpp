#include<bits/stdc++.h>
using namespace std;
 
void printSubsequences(char arr[100], int n)
{
    unsigned int opsize = pow(2, n);
 
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
                cout << arr[j];
        }
        cout << endl;
    }
}
 
int main()
{
	char s[100];
	cin>>s;
   	int n =strlen(s);
    printSubsequences(s, n);
    return 0;
}
