#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    int a[n] ; 
    for(int i=0 ; i<n ; ++i) cin >> a[i] ; 

    int m , x , y; 
    cin >> m ; 

    while(m--){
        cin >> x >> y ; 
        x-- ; 
        if(x-1>=0) a[x-1] += (y-1) ; 
        if(x+1<n) a[x+1] += (a[x] - y) ; 
        a[x] = 0 ; 
    }

    for(int i=0 ; i<n ; ++i){
        cout << a[i] << "\n" ; 
    }
    return 0 ; 
}