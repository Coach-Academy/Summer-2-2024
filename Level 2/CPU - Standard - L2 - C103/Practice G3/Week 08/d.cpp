#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

        int l , r , x;
        int p;cin>>p;
        cin>>l>>r>>x;
        vector<int>v(p);
        for(auto &val:v)cin>>val;
        int res = 0;
        for(int i = 0;i < (1<<p);i++) {
            if(__builtin_popcount(i) >= 2){
                int sum = 0;
                int mn = 1e9 , mx = 0;
                for(int j = 0;j < p;j++) {
                    if(i & (1LL<<j)) {
                        sum += v[j];
                        mn = min(mn , v[j]);
                        mx = max(mx , v[j]);
                    }
                }
                if(sum >= l && sum <= r && mx - mn >= x)res++;
            }
        }
        cout<<res<<"\n";

}