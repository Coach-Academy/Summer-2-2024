#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , k;cin>>n>>k;
    vector<ll>v(n);
    for(int i = 0;i < n;i++)cin>>v[i];
    priority_queue<array<ll , 3>>pq; // sum , l , r;
    pq.push({accumulate(v.begin() , v.end() , 0ll) , 0 , n - 1});
    set<pair<int , int>>s;
    while(k--) {
        auto [sum , l , r] = pq.top();
        pq.pop();
        if(s.count({l , r})) {
            k++;
            continue;
        }
        s.insert({l , r});
        cout<<sum<<" ";
        if(l + 1 <= r)pq.push({sum - v[l] , l + 1 , r});
        if(l <= r - 1)pq.push({sum - v[r] , l , r - 1});
    }
}
