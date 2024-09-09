#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; cin >> n ; 
    int ranks[n-1] ; 
    for(int i=0 ; i<n-1 ; ++i){
        cin >> ranks[i] ; 
    }

    int a , b ; // a = 1 , b = 3 
    cin >> a >> b ; 
    
    int years = 0 ;
    for(int i=a-1 ; i<b-1 ; ++i){ // 0 -> 1  
        years += ranks[i] ; 
    }

    cout << years ; 
    return 0 ; 
}