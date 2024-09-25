#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int arr[n] ; 
    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }


    int mx = arr[0] , mn = arr[0] , cnt = 0; 
    
    for(int i=1 ; i<n ; ++i){
        if(arr[i] > mx){
            mx = arr[i] ; 
            cnt ++ ; 
        }

        if(arr[i] < mn){
            mn = arr[i] ; 
            cnt ++ ; 
        }
    }

    cout << cnt ; 
    return 0 ; 
}