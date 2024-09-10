#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int wires[n] ; 

    for(int i=0 ; i<n ; ++i){
        cin >> wires[i] ; 
    }

    int m , x , y; 
    cin >> m ; 

    while(m--){
        // x : number of wire , y : number of bird in x-th wire
        cin >> x >> y ;
        x-- ; 
        if(x-1>=0) wires[x-1] += (y-1) ; 
        if(x+1<n) wires[x+1] += (wires[x] - y) ; 
        wires[x] = 0 ; 
    }

    for(int i=0 ; i<n ; ++i){
        cout << wires[i] << "\n" ; 
    }
    return 0 ; 
}