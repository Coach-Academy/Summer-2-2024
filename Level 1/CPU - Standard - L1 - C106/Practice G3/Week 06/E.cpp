#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n , k , x ; 
    cin >> n >> k >> x ; 

    int arr[n] ; 

    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    int time = x*k ; 

    for(int i=0 ; i<n-k ; ++i){
        time += arr[i] ; 
    }

    cout << time ; 

}

int main(){
    int t = 1 ; 
    // cin >> t ; 

    while(t--){
        solve() ; 
        cout << "\n" ; 
    }

    return 0 ; 
}