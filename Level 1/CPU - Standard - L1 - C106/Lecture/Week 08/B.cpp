#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque <int> d ; 

    int q , n; 
    cin >> q ; 
    string op ;
    int rev = 0 ; 

    while(q--){
        cin >> op ; 

        if(op=="front"){
            if(d.empty()){
                cout << "No job for Ada?" << "\n" ; 
            }
            else{
                if(rev%2){
                    cout << d.back() << "\n" ; 
                    d.pop_back() ; 
                }
                else{
                    cout << d.front() << "\n" ; 
                    d.pop_front() ; 
                }
            }
        }
        else if(op=="back"){
            if(d.empty()){
                cout << "No job for Ada?" << "\n" ; 
            }
            else{
                if(rev%2){
                    cout << d.front() << "\n" ; 
                    d.pop_front() ; 
                }
                else{
                    cout << d.back() << "\n" ; 
                    d.pop_back() ; 
                }
            }
        }
        else if(op=="reverse"){
            //reverse(d.begin() , d.end()) ;  // O(n)
            rev++ ; 
        }
        else if(op=="push_back"){
            cin >> n ; 
            if(rev%2){
                d.push_front(n) ;
            }
            else{
                d.push_back(n) ; 
            }
        }
        else if(op=="toFront"){
            cin >> n ; 
            if(rev%2){
                d.push_back(n) ; 
            }
            else{
                d.push_front(n) ;
            }
        }
    } 
    return 0 ; 
}