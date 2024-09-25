#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

bool isSameArray(int a[] , int b[] , int sz){
    for(int i=0 ; i<sz ; ++i){
        if(a[i]!=b[i]) return false ; 
    }

    return true ; 
}

int main(){
    int n ; 
    cin >> n ; 
    int p = 0 , in , out , ans = 0; 

    for(int i=0 ; i<n ; ++i){
        cin >> out >> in ; 
        p-=out ; 
        p+=in ; 

        ans = max(ans , p) ;
    }

    cout << ans ; 

    return 0 ; 
}