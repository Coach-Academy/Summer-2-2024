#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n ; 
    cin >> n ; 

    string arr[n] ; 
    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    int g = 1 ; 

    for(int i=0 ; i<n-1 ; ++i){
        if(arr[i]!=arr[i+1]) g++ ; 
    }

    cout << g ; 
    return 0 ; 
}