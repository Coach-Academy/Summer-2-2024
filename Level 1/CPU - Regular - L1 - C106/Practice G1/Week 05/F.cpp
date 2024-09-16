#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = (int)s.size();// s.size() size_t - > int ( casting to int ) so we can loop
    bool flag = false;
    while(n--){
        string t = s;
        reverse(t.begin(),t.end());
        if(s == t)
            flag = true;
        s= '0' + s;
    }
    cout << (flag ? "Yes" : "No") << '\n';
    return 0;
}