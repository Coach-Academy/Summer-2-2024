#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        int p;cin>>p;
        vector<int>v(p);
        for(auto &val:v)cin>>val;
        bool can = false;
        for(int i = 0;i < (1<<p);i++) {
            int sum = 0;
            for(int j = 0;j < p;j++) {
                if(i & (1LL<<j)) {
                    sum += v[j];
                }
            }
            can = can || sum == n;
        }
        cout<<(can ? "YES" : "NO")<<'\n';
    }
}