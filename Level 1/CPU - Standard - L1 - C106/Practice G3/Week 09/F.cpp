#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t ; 
    cin >> t ; 
    string curr = "" , deleted = ""; 
    stack<int> opertions ;
    stack<string> strs ; 
    while(t--){
        int op , k ;
        string s ;  
        cin >> op ; 

        switch(op){
            case 1 :
                cin >> s ; 
                curr += s ; 
                strs.push(s) ;  
                opertions.push(op) ; 
                break;
            case 2 : 
                cin >> k ; 
                deleted = "" ; 
                while(k--){ 
                    deleted += curr.back() ; 
                    curr.pop_back() ; 
                }
                reverse(deleted.begin() , deleted.end()) ; 
                strs.push(deleted) ; 
                opertions.push(op) ; 
                break;
            case 3 : 
                cin >> k ;
                cout << curr[k-1] << "\n" ;  
                break ; 
            case 4 :
                int lastOperation = opertions.top() ; 
                string lastStr = strs.top() ; 
                opertions.pop() ; 
                strs.pop() ; 
                if(lastOperation==1){
                    for(int i=0 ; i<lastStr.size() ; ++i){
                        curr.pop_back() ; 
                    }
                }
                else{
                    curr += lastStr ; 
                }
                break;
        }
    }
    return 0 ; 
}

