#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , k;cin>>n>>k;
    vector<int>v(n);
    for(int i = 0;i < n;i++)cin>>v[i];
    sort(v.rbegin() , v.rend());
    ll res = 0;
    for(int i = 0;i < n;i++) {
        // i am the ith flower
        res += (i / k + 1) * v[i];
    }
    cout<<res<<'\n';
}
