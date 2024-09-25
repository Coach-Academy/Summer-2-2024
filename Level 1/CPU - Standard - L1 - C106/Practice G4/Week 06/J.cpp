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
    int p[n] , q[n] , per[n];

    for(int i=0 ; i<n ; ++i){
        cin >> p[i] ; 
    }  

    for(int i=0 ; i<n ; ++i){
        cin >> q[i] ; 
    }

    for(int i=0 ; i<n ; ++i){
        per[i] = i+1 ; 
    }

    int cnt = 0 , a = -1 , b = -1 ; 

    do{
        cnt++ ; 
        if(isSameArray(p , per , n)){
            a = cnt ; 
        }

        if(isSameArray(q , per , n)){
            b = cnt ;
        }
    }
    while(next_permutation(per , per+n)) ; 
    
    cout << abs(a-b) ; 

    return 0 ; 
}