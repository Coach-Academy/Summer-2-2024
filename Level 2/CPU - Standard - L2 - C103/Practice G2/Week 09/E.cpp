#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;cin>>s;
    if(count(s.begin() , s.end() , '1') == s.size()) {
        s.erase(s.begin());
    }else {
        s.erase(s.find_first_of('0') + s.begin());
    }
    cout<<s;
}
