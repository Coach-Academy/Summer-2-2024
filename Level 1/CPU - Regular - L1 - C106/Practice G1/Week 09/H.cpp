#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    long long sum = 0;
    priority_queue<int, vector<int> , greater<>> pq;
    while(n--){
        int x;
        cin >> x;
        sum+=x;
        pq.push(x);
        while(sum < 0){
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size() << endl;
    return 0;
}