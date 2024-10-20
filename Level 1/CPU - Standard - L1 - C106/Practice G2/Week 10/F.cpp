#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n , m ; 
    cin >> n >> m ; 
    set<int> st ; 

    int x , y ; 
    while(n--){
        cin >> x ; 
        while(x--){
            cin >> y ; 
            st.insert(y) ; 
        }
    }

    cout << (st.size() == m ? "YES" : "NO") ; 
    return 0 ; 
}