#include<bits/stdc++.h>
using namespace std;
 
void findCounts(int *arr, int n)
{
    int i = 0,maxValue=INT_MIN;
    while (i<n)
    {
        if (arr[i] <= 0)
        {
            i++;
            continue;
        }
       int elementIndex = arr[i]-1;
 
        if (arr[elementIndex] > 0)
        {
            arr[i] = arr[elementIndex];
 
            arr[elementIndex] = -1;
        }
        else
        {
            arr[elementIndex]--;
 
            arr[i] = 0;
            i++;
        }
    }
 
    for (int i=0; i<n; i++)
        maxValue=max(maxValue,abs(arr[i]));
    int count=0;
    for(int i=0;i<n;i++)
    {
	if(abs(arr[i]) < maxValue)
	count+=abs(arr[i]);
	else
	continue;
	}
	cout<<count;
}
 
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    findCounts(arr,n);
 
    return 0;
}
