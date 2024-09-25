#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

bool isOneExist(int arr[] , int sz){
    for(int i=0 ; i<sz ; ++i){
        if(arr[i]==1) return true ; 
    }

    return false ; 
}

int main(){
    int n; 
    cin >> n ; 

    int arr[n] ; 

    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    cout << (isOneExist(arr , n) ? -1 : 1) ; 
    
    return 0 ; 
}