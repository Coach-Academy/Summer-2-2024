#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int numberOfDublictes(int arr[] , int sz){
    sort(arr , arr+sz) ;

    int d = 0 ;

    for(int i=0 ; i<sz-1 ; ++i){
        if(arr[i] == arr[i+1]) d++ ; 
    }

    return d ; 
}

int main(){
    int arr[4] ; 

    for(int i=0 ; i<4 ; ++i){
        cin >> arr[i] ; 
    }


    cout << numberOfDublictes(arr , 4) ; 


    return 0 ; 
}