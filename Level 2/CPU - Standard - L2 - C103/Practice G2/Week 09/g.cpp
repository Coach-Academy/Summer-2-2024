#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , d;cin>>n>>d;
    deque<int>dq(n);
    for(auto &val:dq)cin>>val;
    for(int i = 0;i < n;i++) {
        cout<<dq[(i + d) % n]<<" ";
    }
}
