#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long randomLongLong(long long l, long long r) {
    random_device rd;
    mt19937_64 rng(rd());
    uniform_int_distribution<long long> dist(l, r);
    return dist(rng);
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        set<int>os;
            vector<int>v(n);
            int xoring = 0;
            for(int i = 0;i < n - 1;i++) {
                ll rnd = randomLongLong(0 , (1LL<<31) - 1);
                v[i] = rnd;
                if(os.insert(rnd).second)continue;
                i--;
            }
            for(int i = 0;i < n - 1;i++) {
                xoring ^= v[i];
            }
            if(os.count(xoring)) {
                os.clear();
                continue;
            }
            v[n - 1] = xoring;
            for(int i = 0;i < n; i++) {
                cout<<v[i]<<" ";
            }


        cout<<'\n';
    }
}