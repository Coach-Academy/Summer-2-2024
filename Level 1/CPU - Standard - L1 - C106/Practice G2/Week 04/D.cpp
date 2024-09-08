#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        int arr[n] ; 
        for(int i=0 ; i<n ; ++i){
            cin >> arr[i] ; 
        }

        int mn = 1e6 + 1 ,bad = 0 ; 

        for(int i=n-1 ; i>=0 ; --i){
            if(arr[i]>mn) bad ++ ; 
            else mn = arr[i] ; 
        }
        
        cout << bad << "\n"; 
    }
    return 0 ; 
}