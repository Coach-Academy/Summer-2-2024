#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) {
        int n , a , b;cin>>n>>a>>b;
        string s;cin>>s;
        int res = n * a;
        if(b >= 0) {
            res += b * n;
        }else {
            // b is negative
            int cons1 = 0 , cons0 = 0;
            for(int i = 0;i < n - 1;i++) {
                if(s[i] != s[i + 1]) {
                    if(s[i + 1] == '1')cons0++;
                    else cons1++;
                }
            }
            if(s[n - 1] == '0')cons0++;
            else cons1++;
            res += b * min(cons0 + 1 , cons1 + 1);
        }
        cout<<res<<'\n';
    }
}
