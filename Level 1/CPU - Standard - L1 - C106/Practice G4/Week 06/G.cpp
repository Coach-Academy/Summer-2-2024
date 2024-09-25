#include<bits/stdc++.h>

#define ll long long

using namespace std ; 


int main(){

    int n , m ; 
    cin >> n >> m ; 

    int arr[m] ; 
    for(int i=0 ; i<m ; ++i){
        cin >> arr[i] ; 
    }

    sort(arr , arr+m) ; 

    int ans = 1000 ; 

    for(int i=0 ; i<m - n + 1 ; ++i){
        ans = min(ans , arr[i+n-1] - arr[i]) ; 
    }

    cout << ans ; 
    return 0 ; 
}