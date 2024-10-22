#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , s ; 
    cin >> n >> s ; 
    map<int,int> buys , sells ; 
    int p , q ; 
    char dir ; 

    //1) Aggregated orders
    while(n--){
        cin >> dir >> p >> q ; 
        if(dir=='B'){
            buys[p] += q ; 
        }
        else{
            sells[p] += q ; 
        }
    }

    //2)Get sell and buy orders
    vector<pair<int,int>> v1 , v2 ;
    for(auto &i : buys){
        v1.push_back({i.first , i.second}) ; 
    } 

    for(auto &i : sells){
        v2.push_back({i.first , i.second}) ; 
    }

    //3) Get order book
    for(int i=min(s-1 , (int)v2.size()-1) ; i>=0 ; --i){
        cout << "S " << v2[i].first << " " << v2[i].second << "\n" ;  
    }

    for(int i=v1.size()-1 ; i>=max((int)v1.size()-s , 0) ; --i ){
        cout << "B " << v1[i].first << " " << v1[i].second << "\n" ;  
    }
    return 0 ; 
}