#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t , op; 
    cin >> t ; 
    string curr = "" ; 
    stack<int>opertions ; 
    stack<string> strings ;
    string s , deleted = ""; 
    int k ; 
    while(t--){
        cin >> op ; 

        switch(op){
            case 1 : 
                cin >> s ; 
                curr += s ; 
                opertions.push(1) ; 
                strings.push(s) ;
                break;
            case 2 : 
                deleted = "" ; 
                cin >> k ; 
                while(k--){
                    deleted += curr.back() ; 
                    curr.pop_back() ; 
                }
                reverse(deleted.begin() , deleted.end()) ; 
                opertions.push(2) ; 
                strings.push(deleted) ; 
                break;
            case 3 : 
                cin >> k ; 
                cout << curr[k-1] << "\n"; 
                break;
            case 4 : 
                int lastOp = opertions.top() ; 
                string str = strings.top() ; 
                opertions.pop(); 
                strings.pop() ; 

                if(lastOp ==1){
                    for(int i=0 ; i<str.size() ; ++i){
                        curr.pop_back() ; 
                    }
                }
                else{
                    curr +=  str ; 
                }
                break;
        }
    }
    return 0 ; 
}

