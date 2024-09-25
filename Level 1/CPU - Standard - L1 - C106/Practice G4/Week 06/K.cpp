#include<bits/stdc++.h>

#define ll long long

using namespace std ; 


int main(){
    int n ; 
    cin >> n ; 
    int h[n] ; 

    int mx = 0 , mn = 100 , idx1 , idx2 ; 

    for(int i=0 ; i<n ; ++i){
        cin >> h[i] ; 

        if(h[i]>mx){
            idx1=i ; 
            mx = h[i] ; 
        }

        if(h[i]<=mn){
            idx2=i ; 
            mn = h[i] ;
        }
    }

    int swaps = 0 ; 

    for(int i=idx1 ; i>=1 ; --i){
        swap(h[i] , h[i-1]) ; 
        swaps++ ; 
    }

    for(int i=idx2 ; i<n-1 ; ++i){
        swap(h[i] , h[i+1]) ; 
        swaps++ ; 
    }

    // for(int i=0 ; i<n ; ++i){
    //     cout << h[i] << " " ; 
    // }

    cout << swaps - (idx1>idx2) ; 

    // cout << idx1 + (n-idx2-1) - (idx1>idx2); 

    return 0 ; 
}