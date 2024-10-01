#include<bits/stdc++.h>

#define ll long long
using namespace std ; 


int main(){
    int n , sum=0; 
    cin >> n ; 

    // time comlexity : O(n)
    // for(int i=1 ; i<=n ; ++i){
    //     sum+=i ; 
    // } 
    // cout << sum ; 
    

    //time complexity : O(1)
    cout << n * (n+1) / 2 ; 


    return 0 ; 
}

// space complexity : O(1)

