#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t ; 
    cin >> t ; 

    vector<string> opers ;
    vector<int> nums ; 

    string op ; 
    int k ; 

    priority_queue<int , vector<int> , greater<int>> pq ; 

    while(t--){
        cin >> op ; 

        if(op == "insert"){
            cin >> k ; 
            pq.push(k) ; 
            opers.push_back(op) ; 
            nums.push_back(k) ; 
        }
        else if(op == "getMin"){
            cin >> k ; 
            while(!pq.empty()&&pq.top()<k){
                pq.pop() ; 
                opers.push_back("removeMin") ; 
            }
            if(pq.empty() || k != pq.top()){
                pq.push(k) ; 
                opers.push_back("insert") ; 
                nums.push_back(k) ; 
            }

            opers.push_back(op) ; 
            nums.push_back(k) ; 
        }
        else{
            if(pq.empty()){
                pq.push(0) ; 
                opers.push_back("insert") ;
                nums.push_back(0) ; 
            }
            opers.push_back(op) ; 
            pq.pop() ; 
        }
    }

    cout << opers.size() << "\n" ; 

    int i = 0 , j = 0 ; 

    while(i<opers.size()){
        if(opers[i]!="removeMin"){
            cout << opers[i] << " " << nums[j] << "\n" ; 
            i++ , j++ ; 
        }
        else{
            cout << opers[i] << "\n" ;
            i++ ; 
        }
    } 
    return 0 ; 
}

