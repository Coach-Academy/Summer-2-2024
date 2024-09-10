#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t ; 
    cin >> t ; 
    while(t--){
        int n , k ; 
        cin >> n >> k ; 

        int a[n] , b[n] ; 
        for(int i=0 ; i<n ; ++i){
            cin >> a[i] ; 
        }

        for(int i=0 ; i<n ; ++i){
            cin >> b[i] ; 
        }

        sort(a , a+n) ; //acending
        sort(b , b+n , greater<int>()) ; // decending 

        for(int i=0 ; i<n && k--; ++i){
            if(a[i]<b[i]){
                // int tmp = a[i] ; 
                // a[i] = b[i] ; 
                // b[i] = tmp ; 
                swap(a[i] , b[i]) ; 
            }
            else{
                break ; 
            }
        }  

        int sum = 0 ; 
        for(int i=0 ; i<n ; ++i){
            sum += a[i] ; 
        }

        cout << sum << "\n"; 
    }
    return 0 ; 
}