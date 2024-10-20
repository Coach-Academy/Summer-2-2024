#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    vector<int>v(n);
    for(auto &val:v)cin>>val;
    sort(v.begin() , v.end());
    ll res = 0;
    for(int i = 0;i < n;i++) {
        res += abs(v[i] - (i + 1));
    }
    cout<<res<<'\n';
}
