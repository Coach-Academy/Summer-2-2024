#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    while(s.front() == '+')
        s.erase(s.begin());
    for(int i =0;i<s.size();i++){
        cout << s[i];
        if(i < s.size()-1)
            cout << "+";
    }
    return 0;
}