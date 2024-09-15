#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool arr[26] = {0};
    for(int i =0;i<n;i++)
        arr[tolower(s[i]) - 'a'] = 1;
    bool flag = true;
    for(int i = 0 ; i < 26;i++){
        if(!arr[i]){ // 0 !0 = 1
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << '\n';
    return 0;
}