#include<bits/stdc++.h>
using namespace std;

int m=5,like=0;
int main() {
    int n,i;
    cin>>n;
    while(n--)
	{
        like+=(m/2);
        m=(m/2)*3;
    }
    cout<<like;
    return 0;
}
