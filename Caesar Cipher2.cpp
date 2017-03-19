#include<iostream>
#include<cstring>
using namespace std ;

int main()
{int n,k ;
cin>>n;
   unsigned char c[n];

cin>>c ;

cin>> k;
for(int i = 0 ; i <n  ; i++){

if( c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] + k%26;
    if( c[i]  > 'z' )
	{
        c[i] = 'a' + (c[i] - 'z' - 1) ;
    }
    cout<<c[i] ;
  
}
else if( c[i] >= 'A' && c[i] <= 'Z')
{
c[i] = c[i] + k%26;
    if( c[i]  > 'Z')
	{
        c[i] = 'A' + (c[i] - 'Z' - 1) ;
    }
    cout<<c[i] ;
    
}
else
    cout<<c[i] ;
}

return 0 ;}

