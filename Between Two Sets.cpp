#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    
    bool isfactor;
    vector<int> factors;
    
	for (int i=1 ; i <= b[0] ; i++){
        if (b[0] % i == 0) {
            
			isfactor = true;
            for (int j=1 ; j < b.size() ; j++){
            
			    if (b[j] % i != 0 ){
                    isfactor = false;
                    break;
                }
            }
            
			if (isfactor) factors.push_back(i);
        }
    }
    
  
    for (int i=0 ; i < a.size() ; i++){
        
		for (int j=0 ; j < factors.size() ; j++){
            
			if ( factors[j] % a[i] != 0){
                factors.erase(factors.begin() + j);
                j--;
            }
        }    
    }    

    cout << factors.size();
    return 0;
}
	
