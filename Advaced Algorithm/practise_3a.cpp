#include<bits/stdc++.h>
using namespace std ; 

int main() {
     string T , P ;
    cout << "enter a text :  " ;
    cin >> T ;
    cout << "enter a pattern to search : ";
    cin>> P ; 
    int match =0 ; 
    int m = P.length(); 
    int n = T.length() ; 

    for(int i =0 ; i< n-m+1 ; i++){
        int c = 0; 
        for(int j =0 ; j< m ; j++ ){
            if(P[j]== T[i+j])c++ ;
        }
        if(c==m) {
        match++ ;
        cout << " Pattern found at index " << i;
        }
    }

    if(match == 0) cout << "\nPattern not found !!" ; 
    else cout << "\nTotal matches : " << match ;
    


    return 0 ; 
}