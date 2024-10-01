#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ; 
    int ans = 0 ; 

    for(int i=0 ; i<n-1 ; ++i){ // n-1
        if(s[i]==s[i+1]) ans ++ ; 
    }

    cout << ans ; 
    
    return 0 ; 
}

// time complexity : O(n) 
// space complexity : O(n)