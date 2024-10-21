#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) {
        vector<int>c(3) , a(5);
        for(auto &val:c)cin>>val;
        for(auto &val:a)cin>>val;
        if(a[0] > c[0] || a[1] > c[1] || a[2] > c[2] || accumulate(c.begin() , c.end() , 0ll) < accumulate(a.begin() , a.end() , 0ll)) {
            cout<<"NO\n";
            continue;
        }
        // paper ---> paper cycle
        c[0] -= a[0];
        // plastic --> plastic cycle
        c[1] -= a[1];
        // other wastes --> other cycle
        c[2] -= a[2];
        // partial paper ---> paper ,,,,, other
        if(c[0] >= a[3]) {
            a[3] = 0 , c[0] -= a[3];
        }else {
            a[3] -= c[0];
            c[2] -= a[3];
        }
        if(c[1] >= a[4]) {
            a[4] = 0 , c[1] -= a[4];
        }else {
            a[4] -= c[1];
            c[2] -= a[4];
        }
        cout<<(*min_element(c.begin() , c.end()) < 0 ? "NO" : "YES")<<'\n';
    }
}
