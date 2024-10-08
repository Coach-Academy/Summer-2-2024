#include<bits/stdc++.h>

using namespace std ; 


int main(){
    int n ; 
    cin >> n ;

    vector<int> v1 , v2 , v3 ; 

    int x ; 
    for(int i=0 ; i<n ; ++i){
        cin >> x ; 
        if(x==1) v1.push_back(i+1) ; 
        else if(x==2) v2.push_back(i+1) ; 
        else v3.push_back(i+1) ; 
    }

    int teams = min({v1.size() , v2.size() , v3.size()}) ; 

    cout << teams << "\n" ; 

    for(int i=0 ; i<teams ; ++i){
        cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n" ; 
    }
}