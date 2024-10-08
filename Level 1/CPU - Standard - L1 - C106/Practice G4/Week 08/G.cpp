#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t ; 
    int n , rev = 0; 
    string s ; 
    deque <int> dq ; 
    while(t--){
        cin >> s ; 
        if(s=="back"){
            if(dq.empty()){
                cout << "No job for Ada?" ; 
            }
            else{
                if(rev%2){
                    cout << dq.front() ;
                    dq.pop_front() ;  
                }
                else{
                    cout << dq.back() ;
                    dq.pop_back() ;  
                }
            }
            cout << "\n" ; 
        }
        else if(s=="front"){
            if(dq.empty()){
                cout << "No job for Ada?" ; 
            }
            else{
                if(rev%2==0){
                    cout << dq.front() ;
                    dq.pop_front() ;  
                }
                else{
                    cout << dq.back() ;
                    dq.pop_back() ;  
                }
            }
            cout << "\n" ; 
        }
        else if(s=="push_back"){
            cin >> n ;
            if(rev%2){
                dq.push_front(n) ; 
            } 
            else{
                dq.push_back(n) ; 
            }
        }
        else if(s=="toFront"){
            cin >> n ;
            if(rev%2==0){
                dq.push_front(n) ; 
            } 
            else{
                dq.push_back(n) ; 
            }
        }
        else if(s=="reverse"){
            rev++ ; 
        }
    }
    return 0 ; 
}