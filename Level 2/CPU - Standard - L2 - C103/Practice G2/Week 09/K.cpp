#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--) {
        int n ,a  , b;cin>>n>>a>>b;
        string s;cin>>s;
        int res = n * a;
        if(b >= 0) {
            // need to make more and more substrings
            res += b * n;
            cout<<res<<'\n';
            continue;
        }
        // 1111101111111
        // b is negative
        int cons1 = 0 , cons0 = 0;
        for(int i = 0;i < n - 1;i++) {
            if(s[i] == s[i + 1])continue;
            else {
                if(s[i] == '0')cons0++;
                else cons1++;
            }
        }
        if(s[n - 1] == '0')cons0++;
        else cons1++;
        res += (min(cons0 , cons1) + 1) * b;
        cout<<res<<'\n';
    }
}
