#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s1 , s2;cin>>s1>>s2;
    int p1 = count(s1.begin() ,s1.end() , '+');
    int m1 = s1.size() - p1;
    int p2 = count(s2.begin() , s2.end() , '+');
    int m2 = count(s2.begin() , s2.end() , '-');
    int q = s2.size() - p2 - m2;
    int res = 0;
    for(int i = 0;i < (1<<q);i++) {
        int x = 0 , y = 0;
        for(int j = 0;j < q;j++) {
            if(i & (1<<j)) {
                x++;
            }else
                y++;
        }
        if(x + p2 == p1 && y + m2 == m1)res++;
    }
    cout<<fixed<<showpoint<<setprecision(15)<<(long double)res / (1LL<<q)<<'\n';
}