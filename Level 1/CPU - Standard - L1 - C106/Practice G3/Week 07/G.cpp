#include<bits/stdc++.h>

using namespace std ; 


int main(){
    string s ; 
    cin >> s ; 
    int n = s.size() ; 

    sort(s.begin() , s.end()) ; // n logn

    for(int i=0 ; i<n ; ++i){  // n
        if(s[i]=='+') continue;
        cout << s[i];

        if(i!=n-1) cout << "+" ;
    }
    return 0 ; 
}

// time complexity : O(n log(n)) 
// space complexity : O(n)