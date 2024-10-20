#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , k;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>k;
    int res = 0;
    ll sum = 0;
    vector<int>v(n);
    for(int i = 0;i < n;i++)cin>>v[i];
    sort(v.begin() , v.end());
    for(int i = 0;i < n;i++) {
        sum += v[i];
        if(sum <= k)res = i + 1;
        else break;
    }
    cout<<res<<'\n';
}
