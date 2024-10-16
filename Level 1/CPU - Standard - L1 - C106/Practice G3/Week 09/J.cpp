#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t ; 
    cin >> t ; 
    priority_queue<int , vector<int> , greater<int>> pq ; 
    string op ; 
    vector<string> opertions ; 
    vector<int> numbers ; 
    int n ; 
    while(t--){
        cin >> op ; 
        if(op=="insert"){
            cin >> n ; 
            opertions.push_back(op) ; 
            numbers.push_back(n) ; 
            pq.push(n) ; 
        }
        else if(op=="getMin"){
            cin >> n ; 
            if(pq.empty() || pq.top() != n){
                while(!pq.empty() && pq.top()<n){
                    pq.pop() ; 
                    opertions.push_back("removeMin") ; 
                }
                pq.push(n) ; 
                opertions.push_back("insert") ;
                numbers.push_back(n) ;  
            }

            opertions.push_back(op) ; 
            numbers.push_back(n) ;
        }
        else{
            if(pq.empty()){
                pq.push(0) ; 
                opertions.push_back("insert") ; 
                numbers.push_back(0) ; 
            }
            opertions.push_back(op) ; 
            pq.pop() ; 
        }
    }


    cout << opertions.size() << "\n" ; 
    int i=0 , j=0 ; 

    while(i<opertions.size()){
        if(opertions[i]!="removeMin"){
            cout << opertions[i] << " " << numbers[j] << "\n"; 
            i++ , j++ ; 
        }
        else{
            cout << opertions[i] << "\n" ; 
            i++ ; 
        }
    }
    return 0 ; 
}

