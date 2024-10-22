#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , s ; 
    cin >> n >> s ; 
    map<int,int> buy , sell ; 
    char d ; 
    int p , q ; 
    //1)Aggregated orders 
    while(n--){
        cin >> d >> p >> q ; 
        if(d=='B') buy[p] += q ; 
        else sell[p] += q ; 
    }

    //2) Aggregated order list
    vector<pair<int,int>> v1 , v2 ; 
    for(auto &i : sell) v1.push_back({i.first , i.second}) ; 

    for(auto &i : buy) v2.push_back({i.first , i.second}) ; 

    //3) Print order book
    for(int i=min(s-1 , (int)v1.size()-1) ; i>=0 ; --i){
        cout << "S " << v1[i].first << " " << v1[i].second << "\n" ;  
    }

    for(int i=v2.size() - 1 ; i>=max((int)v2.size()-s , 0) ; --i){
        cout << "B " << v2[i].first << " " << v2[i].second << "\n" ;
    }

    return 0 ; 
}