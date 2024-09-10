#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int arr[n-1] ; 
    for(int i=0 ; i<n-1 ; ++i){
        cin >> arr[i] ; 
    }

    int a , b ; 
    cin >> a >> b ; 

    int years = 0 ; 

    for(int i=a-1 ; i<b-1 ; ++i){
        years += arr[i] ; 
    }

    cout << years ; 
    return 0 ; 
}