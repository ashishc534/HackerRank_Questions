#include<bits/stdc++.h>
using namespace std;


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
	int main()
	{
    int n, k, q; 
    scanf("%d %d %d",&n,&k,&q);
    
    int* a = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    
    int new_zero;
    new_zero = n - (k % n);
    
    int* b = malloc(sizeof(int) * q);

    for(int j = 0; j < q; j++){
        int m;
        scanf("%d", &m);
        
        b[j] = a[(new_zero + m) % n];
    }
    
    for (int k = 0; k < q; k++) {
        printf("%d\n", b[k]);
    }
    
    free(a);
    free(b);
    return 0;
}

