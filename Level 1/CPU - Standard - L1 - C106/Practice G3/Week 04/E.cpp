#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    string arr[n] ; 

    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    int g = 1 ; 

    for(int i=1 ; i<n ; ++i){
        if(arr[i-1]!=arr[i]) g++ ; 
    }

    cout << g ; 

    return 0 ; 
}