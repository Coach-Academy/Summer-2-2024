#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , m;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    vector<int>v(m);
    for(auto &val:v)cin>>val;
    sort(v.begin() , v.end());
    int i = 0 , j = n - 1;
    int res = 1e9;
    while(j < m) {
        res = min(res , v[j++] - v[i++]);
    }
    cout<<res;
}
