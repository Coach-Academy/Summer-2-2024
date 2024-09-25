#include<bits/stdc++.h>

#define ll long long

using namespace std ; 


int main(){
    int n , k , x ; 
    cin >> n >> k >> x ; 

    int arr[n] ;

    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    } 

    int time = k*x ; 

    for(int i=0 ; i<n - k ; ++i){
        time += arr[i] ; 
    }

    cout << time ; 

    return 0 ; 
}