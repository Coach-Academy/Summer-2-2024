#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , m ; 
    cin >> n >> m ; 
    int x , y ; 
    set<int> st ; 

    while(n--){
        cin >> x ; 
        while(x--){
            cin >> y ; 
            st.insert(y) ; 
        }
    }

    cout << (st.size()==m ? "YES" : "NO") ; 

    return 0 ; 
}