#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    // int sum = 0 ; 
    // for(int i=1 ; i<=n ; ++i){
    //     sum +=i ; 
    // }

    // cout << sum ; 
    // time complexity : O(n) 
    // space complexity : O(1)

    cout << n*(n+1)/2 ;
    // time complexity : O(1) 
    // space complexity : O(1) 
    
    return 0 ; 
}
