#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[5]={0},a;
	while(n--)
	{
		cin>>a;
		arr[a]++;
	}
	
	int maxCommon = 0,k=0,minValue = INT_MIN,flag=0;
	
	int minOfMax=0;
    int max=arr[0];
    
	for(int u=0;u<5;u++){
        if(arr[u]>max){
            max=arr[u];
            minOfMax=u;
        }   
    }
	for(int a=0;a<5;a++){
        if(a!=minOfMax){
            if(arr[a]==arr[minOfMax]){
                if(minOfMax>a){
                    minOfMax=a;
                }
            }
        }
    }
    cout<<minOfMax+1;
    return 0;
	
}
