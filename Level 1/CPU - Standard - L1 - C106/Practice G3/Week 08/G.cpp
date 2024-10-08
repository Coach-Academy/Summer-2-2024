#include<bits/stdc++.h>

using namespace std ; 


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t , n , rev = 0 ; 
    string s ;
    deque<int> dq ;  
    cin >> t ; 
    
    while(t--){
        cin >> s ; 
        if(s=="back"){
            if(!dq.empty()){
                if(rev%2){
                    cout << dq.front() ; 
                    dq.pop_front() ; 
                }
                else{
                    cout << dq.back() ; 
                    dq.pop_back() ; 
                }
            }
            else{
                cout << "No job for Ada?" ; 
            }
            cout << "\n" ; 
        }
        else if(s=="front"){
            if(!dq.empty()){
                if(rev%2==0){
                    cout << dq.front() ; 
                    dq.pop_front() ; 
                }
                else{
                    cout << dq.back() ; 
                    dq.pop_back() ; 
                }
            }
            else{
                cout << "No job for Ada?" ; 
            }
            cout << "\n" ; 
        }
        else if(s=="reverse"){
            rev++ ; 
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
    }

}