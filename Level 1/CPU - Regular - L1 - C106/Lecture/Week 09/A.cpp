#include <bits/stdc++.h>

using namespace std;

int main(){
    int n ,d;
    cin >> n >> d;
    queue<int> q;
    while(n--){
        int x;
        cin >> x;
        q.push(x);
    }
    while(d--){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    return 0;
}