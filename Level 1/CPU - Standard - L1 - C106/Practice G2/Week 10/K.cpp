#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n , s ; 
    cin >> n >> s ; 

    //1)Aggregated
    map<int,int> buy , sell ; 
    int p , q ; 
    char t ; 
    for(int i=0 ; i<n  ; ++i){
        cin >> t >> p >> q ; 
        if(t=='S'){
            sell[p] += q ; 
        }
        else{
            buy[p] += q ; 
        }
    }

    //Select best s order 
    vector<pair<int,int>> v1 , v2 ; 
    for(auto &i : sell){
        v1.push_back({i.first , i.second}) ; 
    }

    for(auto &i : buy){
        v2.push_back({i.first , i.second}) ;
    }

    // get order book
    sort(v1.begin() , v1.end()) ; 
    sort(v2.begin() , v2.end()) ;

    for(int i=min(s , (int)v1.size())-1 ; i>=0 ; --i){
        cout << "S " << v1[i].first << " " << v1[i].second << "\n" ; 
    }

    for(int i=v2.size()-1 ; i>=max((int)v2.size()-s , 0) ; --i){
        cout << "B " << v2[i].first << " " << v2[i].second << "\n" ; 
    }
    
    return 0 ; 
}