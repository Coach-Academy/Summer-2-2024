#include <bits/stdc++.h>
#define JS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

void Solve(){
    string s;
    cin >> s;
    ll n = s.size();
if(n == 1){
   if(islower(s[0]))cout<<"Yes";
   else cout<<"No";
exit(0);
}
    bool f = true;
    for(int i = 0 ; i < n-1 ; i+=2){
        if(s[i] != tolower(s[i]) || s[i+1]!=toupper(s[i+1])){cout<<"No"; return ;}
      
    }
cout<<"Yes"; 
}

int main() {
    JS
    Solve();
    return 0;
}