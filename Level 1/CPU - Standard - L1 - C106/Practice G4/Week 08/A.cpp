#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    vector<int> pos , neg , zero ; 

    int x ;

    for(int i=0 ; i<n ; ++i){
        cin >> x ; 

        if(x>0) pos.push_back(x) ; 
        else if(x<0) neg.push_back(x) ;
        else zero.push_back(x) ; 
    }

    if(neg.size()%2 == 0){
        zero.push_back(neg.back()) ; 
        neg.pop_back() ; 
    }

    if(pos.empty()){
        pos.push_back(neg.back()) ; 
        neg.pop_back() ; 
        pos.push_back(neg.back()) ; 
        neg.pop_back() ; 
    }

    cout << neg.size() << " " ; 
    for(auto &i : neg) cout << i << " " ; 

    cout << "\n" ; 

    cout << pos.size() << " " ; 
    for(auto &i : pos) cout << i << " " ; 

    cout << "\n" ;

    cout << zero.size() << " " ; 
    for(auto &i : zero) cout << i << " "  ;
    
    return 0 ; 
}