#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    int arr[n] ; 
    for(int i=0 ; i<n ; ++i) cin >> arr[i] ; 

    int mn = 1e9 , mx = -1e9 , mnIdx , mxIdx ; 
    for(int i=0 ; i<n ; ++i){
        if(arr[i]<=mn){
            mn = arr[i] ; 
            mnIdx = i ; 
        }

        if(arr[i]>mx){
            mx = arr[i] ; 
            mxIdx = i ; 
        }
    }

    int ans = (n - mnIdx - 1) + mxIdx ; 

    if(mxIdx > mnIdx) ans -- ; 
    cout << ans ; 
    
    return 0 ; 
}