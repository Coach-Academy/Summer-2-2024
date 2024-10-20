#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    ll sum1 = 0 , sum2 = 0;
    for(int i = 0;i < n;i++) {
        int x;cin>>x;
        if(x >= 0)sum1 += x;
        else sum2 += x;
    }
    cout<<sum1 - sum2;
}
