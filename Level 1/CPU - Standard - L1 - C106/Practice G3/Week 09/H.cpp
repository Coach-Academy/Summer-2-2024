#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    int x ; 
    long long sum = 0 ;

    priority_queue<int , vector<int> , greater<int>> pq ; 

    while(n--){
        cin >> x ; 
        if(sum + x >= 0){
            sum += x ; 
            pq.push(x) ; 
        }
        else{
            if(!pq.empty() && pq.top() < x){
                sum += x ; 
                sum -= pq.top() ; 
                pq.pop() ; 
                pq.push(x) ; 
            }
        }
    }

    cout << pq.size() ; 
    return 0 ; 
}

