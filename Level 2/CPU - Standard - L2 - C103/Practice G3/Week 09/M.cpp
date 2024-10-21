#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) {
        int n , k;
        cin>>n>>k;
        vector<int>v(n);
        for(auto &val:v)cin>>val;
        for(int i = 0;i < n - 1;i++) {
            if(v[i] == 0)continue;
            if(k >= v[i]) {
                v[n - 1] += v[i];
                k -= v[i];
                v[i] = 0;
            }else {
                v[i] -= k;
                v[n - 1] += k;
                break;
            }
        }
        for(auto &val:v)cout<<val<<" ";
        cout<<'\n';
    }
}
