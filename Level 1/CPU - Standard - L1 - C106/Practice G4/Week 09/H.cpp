#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , x ; 
    cin >> n ;
    long long sum = 0 ; 
    priority_queue<int , vector<int> , greater<int>> pq ; 

    while(n--){
        cin >> x ; 
        if(sum + x >= 0){
            pq.push(x) ; 
            sum += x ;
        }
        else if(!pq.empty() && pq.top()<x){
                sum -= pq.top() ; 
                sum += x ; 
                pq.pop() ; 
                pq.push(x) ; 
        }
    }
        
    cout << pq.size() ; 
    return 0 ; 
}

